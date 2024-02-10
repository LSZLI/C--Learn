#include "aincludeconsole.h"

struct player 
{   
    // static int x,y;    //不属于结构体成员
    int x,y;
    void print(){
        std::cout<<x<<ENDL<<y<<ENDL;
    }
};

int main(){
    player kris,chara;
    kris.x = 10;
    kris.y = 20;

    chara.x = 8;
    chara.y = 23;
    
    kris.print();
    chara.print();
}
