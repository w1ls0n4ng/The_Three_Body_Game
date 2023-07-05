#ifndef PLAYERS_H
#define PLAYERS_H

#include "gamestatus.h"

class players
{
public:
    int guess_num[3];
    int guess_current_num[3];
    int guess_status[3];
    void initialize(){
        for (int i=0;i<3;++i){
            guess_num[i]=0;
            guess_current_num[i]=0;
            guess_status[i]=0;
        }
    }
    void update(string guessstatus,int guessnum,gamestatus & gamestatus1){
        for (int i=0;i<3;++i){
            if (guess_status[i]==0){
                if (guessstatus=="胜利"){
                    guess_num[i]=guessnum;
                    guess_current_num[i]=gamestatus1.current_civilization_num;
                    guess_status[i]=1;
                    cout << i+1 << "/3 预言" << guessnum << "号文明" << guessstatus;
                }
                else {
                    if (guessstatus=="失败"){
                        guess_num[i]=guessnum;
                        guess_current_num[i]=gamestatus1.current_civilization_num;
                        guess_status[i]=-1;
                        cout << i+1 << "/3 预言" << guessnum << "号文明" << guessstatus;
                    }
                    else {
                        cout << "请输入合法的格式";
                    }
                }
                break;
            }
        }
    }
};

#endif // PLAYERS_H
