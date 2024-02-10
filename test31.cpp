#include<iostream>
using namespace std;


void swap (int a,int b){
    int swap = a;
    a = b;
    b = swap;
}
void xxswap (int *a,int *b){
    int* swap = a;
    *a = *b;
    *b = *swap;
}
void mmnswap(int &a, int &b){
    int swap = a;
    a = b;
    b = swap;
}
int main(){
    int a = 100;
    int b = 31331;
    swap(a,b);
    cout<<a<<"\n";
    cout<<b<<"\n";
    int *p = &a;
    int *c = &b;
    xxswap(p,c);
    cout<<p<<"\n";
    cout<<c<<"\n";
    mmnswap(a,b);
    cout<<a<<"\n";
    cout<<b<<"\n";
}