#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;

    cout<<a<<"\n";
    cout<<b<<"\n";

    b = 100;

    cout<<a<<"\n";
    cout<<b<<"\n";
}