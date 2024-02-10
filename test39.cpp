#include "ainclude.h"
using namespace std;
class player {
    public:
        int x,y;
        void test();
};
void player::test(){
    printf ("%d %d\n",x,y);
}

int main(){
    player kris;
    kris.x=kris.y=10;
    kris.test();
}
