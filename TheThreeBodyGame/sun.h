#ifndef SUN_H
#define SUN_H

#include <iostream>
#include <string>
#include <random>
using namespace std;

// 计算距离
template <class T1, class T2>
double distance(T1 &t1, T2 &t2)
{
    double d = 0;
    for (int i = 0; i < 3; ++i)
    {
        d += (t1.location[i] - t2.location[i]) * (t1.location[i] - t2.location[i]);
    }
    return sqrt(d);
}

class sun
{
public:
    int *game_stop;
    double location[3] = {0, 0, 0};
    double velocity[3];
    double mass;

    // 初始化恒星质量、位置及速度，为了避免它们在游戏开局时相撞或距离过近，需要传一些参
    void initialize(int t1, int t2, int t3, int &stop)
    {
        game_stop = &stop;
        location[0] = t1;
        location[1] = t2;
        location[2] = t3;
        default_random_engine e;
        uniform_real_distribution<double> u1(1.5, 2.5);
        mass = u1(e);
        uniform_real_distribution<double> u2(0, 4);
        for (int i = 0; i < 3; ++i)
        {
            velocity[i] = (u2(e) - 2) * 0.5;
            location[i] += u2(e);
        }
    }
    // 更新太阳位置与速度，距离小于0.02个天文单位则相撞，游戏直接结束
    void update_sun(int gap, int G, sun &sun2, sun &sun3)
    {
        double update_loc[3][3];
        double update_vel[3][3];
        double distance12 = distance(*this, sun2);
        double distance23 = distance(sun2, sun3);
        double distance31 = distance(sun3, *this);
        if (distance12 < 0.02 | distance23 < 0.02 | distance31 < 0.02)
        {
            *game_stop = -1;
        }
        if (*game_stop == 0)
        {
            for (int i = 0; i < 3; ++i)
            {
                update_loc[0][i] = this->velocity[i] * double(gap) / 1000;
                update_loc[1][i] = sun2.velocity[i] * double(gap) / 1000;
                update_loc[2][i] = sun3.velocity[i] * double(gap) / 1000;
            }
            for (int i = 0; i < 3; ++i)
            {
                update_vel[0][i] = G * sun2.mass * (sun2.location[i] - this->location[i]) / (distance12 * distance12 * distance12) * double(gap) / 1000;
                update_vel[0][i] += G * sun3.mass * (sun3.location[i] - this->location[i]) / (distance31 * distance31 * distance31) * double(gap) / 1000;
                update_vel[1][i] = G * this->mass * (this->location[i] - sun2.location[i]) / (distance12 * distance12 * distance12) * double(gap) / 1000;
                update_vel[1][i] += G * sun3.mass * (sun3.location[i] - sun2.location[i]) / (distance23 * distance23 * distance23) * double(gap) / 1000;
                update_vel[2][i] = G * this->mass * (this->location[i] - sun3.location[i]) / (distance31 * distance31 * distance31) * double(gap) / 1000;
                update_vel[2][i] += G * sun2.mass * (sun2.location[i] - sun3.location[i]) / (distance23 * distance23 * distance23) * double(gap) / 1000;
            }
            for (int i = 0; i < 3; ++i)
            {
                this->location[i] += update_loc[0][i];
                this->velocity[i] += update_vel[0][i];
                sun2.location[i] += update_loc[1][i];
                sun2.velocity[i] += update_vel[1][i];
                sun3.location[i] += update_loc[2][i];
                sun3.velocity[i] += update_vel[2][i];
            }
        }
    }
};

#endif // SUN_H
