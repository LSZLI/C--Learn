#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        string name;
        int xh;
};

int main(){
    student s1;
    cin>>s1.name;
    cin>>s1.xh;

    cout<<s1.name<<"\n";
    cout<<s1.xh;
}