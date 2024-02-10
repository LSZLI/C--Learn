#include<iostream>
using namespace std;

int main()
{
//指针指向的值不可以改
//指针的指向可以改
//适用于const int
    int a = 10;
    int b = 100;
    const int * p = &a;
    p = &b;
    cout<<"指针P的指向："<<p<<endl;
    cout << "a的地址" <<&a<<endl;
    cout << "b的地址" <<&b<<endl;
 //指针指向的值可以改
//指针的指向不可以改
//适用于int const
    int * const z = &a;
    *z = 30;
    cout<<"指针Z的指向的内存数据："<<*z<<endl;
    cout << "a的值" <<a<<endl;
    cout << "b的值" <<b<<endl;
}