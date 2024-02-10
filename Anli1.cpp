#include<iostream>
using namespace std;

int main()
{
    cout<<"请输入分别猪A、B、C的体重"<<endl;
    float a = 0.1f;
    float b = 0.1f;
    float c = 0.1f;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b)
    {
        if (a = 200)
        {
        cout<<"char占用"<<sizeof(char)<<"字节"<<endl;
        cout<<"float占用"<<sizeof(float)<<"字节"<<endl;
        cout<<"short"<<sizeof(short)<<"字节"<<endl;
        }
       if(a>c)
       {
        cout<<"A最重"<<endl;
       }
       else
       {
        cout<<"c最重"<<endl;
       }
    }
    else
    {
        if(a>c)
        {
            cout<<"B最重"<<endl;
        }
        else
        {
            cout<<"C最重"<<endl;
        }
        if (a = 200)
        {
            cout<<"char占用"<<sizeof(char)<<"字节"<<endl;
            cout<<"float占用"<<sizeof(float)<<"字节"<<endl;
            cout<<"short"<<sizeof(short)<<"字节"<<endl;
        }   
    
    }
    
    
}