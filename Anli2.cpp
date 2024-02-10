#include<iostream>
#include <unistd.h>
#include <ctime>
using namespace std;

int main(void)
{
    cout<<"猜数Game\n";
    srand((unsigned int)time(NULL));
    sleep(1);
    int pc = rand()%100;
    int ua = 0;
    cout<<"您觉得是什么数字?"<<pc<<endl;
    cin>> ua;
    int zs = 0;
    while (1)
    {
        if (pc < ua)
        {
            cout<<"woc,这么大,小一点\n";
            cout<<"重新猜数"<<"\n";
            cin>> ua;
        }
        else if  (pc > ua)
        {
            cout<<"woc,这么小,大一点\n";
            cout<<"重新猜数"<<"\n";
            cin>> ua;
        }
        else
        {
            cout<<"你这智商还行啊，猜对了\n";
            break;
        }

    }
    return 0; 
}