#include"ainclude.h"
using namespace std;
int func1(int a, int b = 10){
    return a+b;
}
int func(){
    cout<<"SJIONONIO"<<ENDL;
}
int func(int a){
    cout<<"a"<<ENDL;
}
void func2(int &a){
    cout<<a<<ENDL;
}
int main(){
    cout<<func1(100)<<ENDL;
    cout<<func1(100,100)<<ENDL;
//    func();
    func(40);
    int a = 89789;
    func2(a);
}