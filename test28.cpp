#include<iostream>
using namespace std;

int main(){
    int * p = new int(100);
    cout<<*p<<"\n";
    cout<<p<<"\n";
    int * cp = new int[10];
    for(int i = 0; i < 10;i++){
        cp[i] = i;
        cout<<cp[i]<<"\n";
        cout<<cp<<"\n";
    }
    delete p,cp;
}