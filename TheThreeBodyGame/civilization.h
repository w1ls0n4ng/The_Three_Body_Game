#ifndef CIVILIZATION_H
#define CIVILIZATION_H

#include "planet.h"
#include <iostream>
#include <string>
#include <random>
using namespace std;

class civilization
{
public:
    planet *earth;
    bool is_alive;
    double develop_index;
    string current_stage;
    int max_fatal_temp;
    int min_fatal_temp;
    string current_state;
    int develop_speed_multiply;
    int current_num;
    double gap_to_last_civilization;
    void initialize(planet &earth)
    {
        this->earth = &earth;
        is_alive = 0;
        current_stage = "文明孕育中";
        current_state = "";
        develop_index = 0;
        develop_speed_multiply = 0;
        current_num = 0;
        gap_to_last_civilization = 0;
    }
    void update_civilization(int gap, planet &earth)
    {
        // 文明诞生事件
        if (is_alive == 0)
        {
            if (earth.continue_constant_era >= 15)
            {
                is_alive = 1;
                current_num += 1;
                gap_to_last_civilization += double(gap) / 1000;
            }
        }
        // 文明发展状态判定
        if (is_alive == 1)
        {
            if (earth.continue_constant_era < 0.1)
            {
                current_state = "乱纪元避难";
                develop_speed_multiply = 0;
            }
            if (earth.continue_constant_era >= 0.1 & earth.continue_constant_era < 100)
            {
                current_state = "缓慢发展";
                develop_speed_multiply = 1;
            }
            if (earth.continue_constant_era >= 100 & earth.continue_constant_era < 300)
            {
                current_state = "快速发展";
                develop_speed_multiply = 2;
            }
            if (earth.continue_constant_era >= 300 & earth.continue_constant_era < 500)
            {
                current_state = "飞速发展";
                develop_speed_multiply = 3;
            }
            if (earth.continue_constant_era >= 500 & earth.continue_constant_era < 1000)
            {
                current_state = "黄金时代";
                develop_speed_multiply = 5;
            }
            if (earth.continue_constant_era >= 1000)
            {
                current_state = "钻石时代";
                develop_speed_multiply = 10;
            }
        }
        // 文明发展阶段判定
        if (is_alive == 1)
        {
            if (develop_index < 10000)
            {
                current_stage = "古代文明";
                max_fatal_temp = 50;
                min_fatal_temp = -100;
            }
            if (develop_index >= 10000 & develop_index < 40000)
            {
                current_stage = "工业文明";
                max_fatal_temp = 100;
                min_fatal_temp = -150;
            }
            if (develop_index >= 40000 & develop_index < 80000)
            {
                current_stage = "信息文明";
                max_fatal_temp = 150;
                min_fatal_temp = -200;
            }
            if (develop_index >= 80000 & develop_index < 100000)
            {
                current_stage = "星际文明";
                max_fatal_temp = 200;
                min_fatal_temp = -250;
            }
            if (develop_index >= 100000)
            {
                current_stage = "宇宙文明";
                max_fatal_temp = 250;
                min_fatal_temp = -273;
            }
        }
        // 文明灭亡事件
        if (is_alive == 1)
        {
            if (earth.temperature > max_fatal_temp | earth.temperature < min_fatal_temp)
            {
                cout << "文明遭遇异常温度灭亡！" << endl;
                is_alive = 0;
                current_stage = "文明孕育中";
                current_state = "";
                develop_index = 0;
                develop_speed_multiply = 0;
            }
        }
        // 文明发展
        develop_index += double(develop_speed_multiply) * double(gap) / 1000;
    }
};

#endif // CIVILIZATION_H
