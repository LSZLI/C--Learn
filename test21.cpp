#include<iostream>
using namespace std;

int main()
{
    int vlist[] = {20,12,31,21};
    cout << "The first" <<vlist[0]<<endl;
    int *p =vlist;//数组[]前面就是地址
    cout <<"访问第一个"<<*p<< endl;
    cout << "然后" << endl;
    for(int i;*p > 0;p++)
    {
        cout <<*p<< endl;
    }
}