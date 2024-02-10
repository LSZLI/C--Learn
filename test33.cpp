#include<iostream>
#include<string>
using namespace std;

class student{
    public:
        int id;
        string name;
        void input_name_id(){
            cout<<id<<"\n"<<name;
        }
};

int main(){
    student s1;
    s1.id = 1;s1.name = "lsz";
    s1.input_name_id();
}