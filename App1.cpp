#include<iostream>
using namespace std;

int main()
{
    cout<<"ASCII字符转换器 KrisLSZ制作 Linux 0.1"<<endl;
    cout<<"如果是字符转ASCII,请输入1并回车,如果是ASCII转字符,请输入2并回车 ,如果要退出请输入除1和2的任意建并回车."<<endl;
    short a = 0;
    cin>>a;
    if(a != 1)
    {
        if(a !=2 )
        {
            system("exit");
        }
        else
        {
            cout<<"请输入ASCII码"<<endl;
            short N2 = 0;
            cin>>N2;
            cout<<"ASCII"<<N2<<"码是字符"<<(char)N2;
        }
    }
    else
    {
        cout<<"请输入字符"<<endl;
        char N1 = ' ';
        cin>>N1;
        cout<<N1<<"的ASCII码是"<<(short)N1<<endl;
    }
     return 0;
}