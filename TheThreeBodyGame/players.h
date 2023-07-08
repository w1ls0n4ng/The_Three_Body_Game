#ifndef PLAYERS_H
#define PLAYERS_H

#include "gamestatus.h"

//用于记录玩家的猜测

class players
{
public:
    int guess_count;
    int guess_num[3];
    int guess_current_num[3];
    int guess_status[3];
    void initialize(){
        guess_count=0;
        for (int i=0;i<3;++i){
            guess_num[i]=0;
            guess_current_num[i]=0;
            guess_status[i]=0;
        }
    }
};

#endif // PLAYERS_H
