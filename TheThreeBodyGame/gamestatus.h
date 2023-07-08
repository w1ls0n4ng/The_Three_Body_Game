#ifndef GAMESTATUS_H
#define GAMESTATUS_H

#include "sun.h"
#include "planet.h"
#include "civilization.h"
#include <iostream>
#include <string>

//game_status=0代表游戏正在进行，1代表文明取得胜利，-1代表失败，行星被吞噬,恒星相撞或者环境毁灭。当状态不为0时游戏结束，输出相应信息
//current_civilization_state记录当前文明状态，1存活0灭亡
//current_civilization_num记录当前文明数（无论是否灭亡）
//每一帧结束时单独更新gamestatus，不再在sun,planet,civilization类函数调用时更新


class gamestatus
{
public:
    int game_status=0;
    int current_civilization_state=0;
    int current_civilization_num=0;
    string gamestop_information;
    void initialize() {}
    void update(sun &sun1, sun &sun2, sun &sun3, planet &earth, civilization &threebodyman){
        double distance12 = distance(sun1, sun2);
        double distance23 = distance(sun2, sun3);
        double distance31 = distance(sun3, sun1);
        double distance1e = distance(sun1, earth);
        double distance2e = distance(sun2, earth);
        double distance3e = distance(sun3, earth);

        //游戏终止事件
        if (distance12 < 0.1 | distance23 < 0.1 | distance31 < 0.1){
            game_status=-1;
            gamestop_information="恒星相撞\n数万度高温彻底摧毁了行星！\n第520号行星失败！";
            cout << "恒星相撞，数万度高温彻底摧毁了行星！" << "当前文明号" << current_civilization_num;
        }
        if (distance1e < 0.1 | distance2e < 0.1 | distance3e < 0.1){
            game_status=-1;
            gamestop_information="行星被吞噬！\n第520号行星失败！";
            cout << "行星被吞噬！" << "当前文明号" << current_civilization_num;
        }
        if (threebodyman.gap_to_last_civilization >= 1000){
            game_status=-1;
            gamestop_information="行星长期遭遇不适宜温度\n生态环境毁灭\n再也无法产生文明！\n第520号行星失败！";
            cout << "行星长期遭遇不适宜温度，生态环境毁灭，再也无法产生文明！" << "当前文明号" << current_civilization_num;
        }
        if (threebodyman.develop_index >= 100000){
            game_status=1;
            gamestop_information="文明发展至宇宙文明阶段\n开启星系大航行时代！\n文明获得胜利！";
            cout << "文明发展至宇宙文明阶段，开启星系大航行时代！文明获得胜利！" << "当前文明号" << current_civilization_num;
        }

        //文明状态更新事件
        if (current_civilization_state==1 & threebodyman.is_alive==0){
            current_civilization_state=0;
        }
        if (current_civilization_state==0 & threebodyman.is_alive==1){
            current_civilization_state=1;
            current_civilization_num+=1;
        }
    }
};




#endif // GAMESTATUS_H
