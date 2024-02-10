#include<iostream>
using namespace std;

int main(){
    int a = 20;
    int b = 293;
    int &c = b;

    cout<<c<<"\n";

    c = a;

    cout<<c<<"\n";
}