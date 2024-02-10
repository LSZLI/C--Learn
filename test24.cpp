#include<iostream>
#include<string>
using namespace std;

struct student 
{
    string name;
    int age;
    int score;

};
int main()
{
     struct student arr[2]=
    {
        {"Chy",13,98},
        {"Lsz",12,60},
    };
    for(int i = 0;i < 2;i++)
    {
        cout <<arr[i].name<< endl;
        cout << arr[i].score<< endl;
    }
}