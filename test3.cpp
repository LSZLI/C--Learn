#include<iostream>
using namespace std;

int main()
{
    short a = 0;//YUANLAIDESHUI
    short b = 0;//XIANGTIAODESHUI 
    cin>>a;
    cin>>b;
    long c = a-b;//CHA
    long d = c / 10;//DIYICI
    if (d != 0)
    {
        int e = d / 5;
        if (e != 0)
        {
            cout<<"AN"<<d<<"CIANJIAN"<<endl;
        }
    }
    else
    {
     cout<<"AN"<<d<<"CI"<<endl;
    }
    return 0;

}