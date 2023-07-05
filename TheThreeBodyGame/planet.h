#ifndef PLANET_H
#define PLANET_H

#include "sun.h"
#include <iostream>
#include <string>
#include <random>
using namespace std;

class planet
{
public:
    sun *father_sun;
    int father_sun_num;
    double location[3];
    double velocity[3];
    double season;
    int orbit;
    double temperature;
    double continue_constant_era;
    double distance_to_last_catch = 0;
    double constant_era = 0;
    double chaotic_era = 0;
    double year = 0;
    // 初始化行星，随机分配一个母星
    void initialize(sun &sun1, sun &sun2, sun &sun3)
    {
        default_random_engine e;
        uniform_int_distribution<int> u(1, 3);
        father_sun_num = u(e);
        orbit = u(e);
        season = 0;
        temperature = 15;
        continue_constant_era = 0;
        if (father_sun_num == 1)
        {
            father_sun = &sun1;
        }
        if (father_sun_num == 2)
        {
            father_sun = &sun2;
        }
        if (father_sun_num == 3)
        {
            father_sun = &sun3;
        }
        for (int i = 0; i < 3; ++i)
        {
            location[i] = father_sun->location[i];
            velocity[i] = father_sun->velocity[i];
            if (i == orbit)
            {
                location[i] += 1;
            }
            if (i == (orbit + 1) % 3)
            {
                velocity[i] += 3.1415926 * sqrt(father_sun->mass / 2);
            }
        }
    }
    // 分两种情况update，有母星和没有母星的情况
    void update_planet(int gap, double G, sun &sun1, sun &sun2, sun &sun3)
    {
        if (father_sun_num)
        {
            season += double(gap) / 1000;
            for (int i = 0; i < 3; ++i)
            {
                location[i] = father_sun->location[i];
                velocity[i] = father_sun->velocity[i];
                if (i == orbit % 3)
                {
                    location[i] += cos(2 * 3.1415926 * season);
                    velocity[i] += 3.1415926 * sqrt(father_sun->mass / 2) * sin(2 * 3.1415926 * season);
                }
                if (i == (orbit + 1) % 3)
                {
                    location[i] += sin(2 * 3.1415926 * season);
                    velocity[i] += 3.1415926 * sqrt(father_sun->mass / 2) * cos(2 * 3.1415926 * season);
                }
            }
        }
        else
        {
            double update_loc[3];
            double update_vel[3] = {0, 0, 0};
            distance_to_last_catch += double(gap) / 1000;
            double r1 = distance(*this, sun1);
            double r2 = distance(*this, sun2);
            double r3 = distance(*this, sun3);
            for (int i = 0; i < 3; ++i)
            {
                update_loc[i] = velocity[i] * double(gap) / 1000;
            }
            for (int i = 0; i < 3; ++i)
            {
                if (r1<2){
                    update_vel[i] += G * sun1.mass * (sun1.location[i] - location[i]) / (r1 * 4) * double(gap) / 1000;
                }
                if (r1<=2 & r1>=2) {
                    update_vel[i] += G * sun1.mass * (sun1.location[i] - location[i]) / (r1 * r1 * r1) * double(gap) / 1000;
                }
                if (r1>2){
                    update_vel[i] += G * sun1.mass * (sun1.location[i] - location[i]) / (r1 * r1 * 2) * double(gap) / 1000;
                }
                if (r2<2){
                    update_vel[i] += G * sun2.mass * (sun2.location[i] - location[i]) / (r2 * 4) * double(gap) / 1000;
                }
                if (r2<=2 & r2>=2) {
                    update_vel[i] += G * sun2.mass * (sun2.location[i] - location[i]) / (r2 * r2 * r2) * double(gap) / 1000;
                }
                if (r2>2){
                    update_vel[i] += G * sun2.mass * (sun2.location[i] - location[i]) / (r2 * r2 * 2) * double(gap) / 1000;
                }
                if (r3<2){
                    update_vel[i] += G * sun3.mass * (sun3.location[i] - location[i]) / (r3 * 4) * double(gap) / 1000;
                }
                if (r3<=2 & r3>=2) {
                    update_vel[i] += G * sun3.mass * (sun3.location[i] - location[i]) / (r3 * r3 * r3) * double(gap) / 1000;
                }
                if (r3>2){
                    update_vel[i] += G * sun3.mass * (sun3.location[i] - location[i]) / (r3 * r3 * 2) * double(gap) / 1000;
                }
            }
            for (int i = 0; i < 3; ++i)
            {
                location[i] += update_loc[i];
                velocity[i] += update_vel[i];
            }
        }
        double d1 = distance(*this, sun1);
        double d2 = distance(*this, sun2);
        double d3 = distance(*this, sun3);
        temperature = 288.15;
        temperature *= sqrt(sqrt(1 / (d1 * d1) + 1 / (d2 * d2) + 1 / (d3 * d3)));
        temperature -= 273.15;
        year += double(gap) / 1000;
        if (temperature > 12 & temperature < 18)
        {
            constant_era += double(gap) / 1000;
            continue_constant_era += double(gap) / 1000;
        }
        if (temperature <= 12 | temperature >= 18)
        {
            continue_constant_era = 0;
            chaotic_era += double(gap) / 1000;
        }
        // 丢球判定
        if (father_sun_num != 0)
        {
            if ((d1 < 1 & father_sun_num != 1) | (d2 < 1 & father_sun_num != 2) | (d3 < 1 & father_sun_num != 3))
            {
                father_sun_num = 0;
                distance_to_last_catch = 0;
            }
        }
        // 得球判定
        if (father_sun_num == 0 & distance_to_last_catch > 15)
        {
            if (d1 < 3)
            {
                father_sun_num = 1;
                father_sun = &sun1;
                season = 0;
                orbit += 1;
            }
            if (d2 < 3)
            {
                father_sun_num = 2;
                father_sun = &sun2;
                season = 0;
                orbit += 1;
            }
            if (d3 < 3)
            {
                father_sun_num = 3;
                father_sun = &sun3;
                season = 0;
                orbit += 1;
            }
        }
    }
};

#endif // PLANET_H
