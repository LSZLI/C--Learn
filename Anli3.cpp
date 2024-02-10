#include<iostream>
using namespace std;

int main()
{
    int mun = 100;
    int a = 0;
    int b = 0;
    int c = 0;
    do
    {
        a = mun%10;
        b = mun/100%5;
        c = mun/100;
        if(a*a*a + b*b*b + c*c*c == mun)
        {
            cout<<mun<<"是水仙花数"<<endl;
        }
        mun++;
    }
    while (mun < 1000);
    return 0;
    
}