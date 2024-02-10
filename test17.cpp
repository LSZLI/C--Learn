#include<iostream>
using namespace std;
//数据类型 * 指针变量
int main(){
    int * p;
    int a = 10; 
    p = &a;
    cout<<p<<endl;
// 2
   cout<<sizeof(p)<<endl;
}