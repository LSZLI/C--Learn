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
    student s1 = {"CHY",13,100};
    student s2 ={"LSZ",11,0};
    student * p1 = &s1;
    student * p2 = &s2;
    cout << "s1地址" <<p1<<endl;
    cout << "s2地址" <<p2<<endl;
    cout << "S1" <<p1->name<<"的分数:"<<p1->score<<endl;
    cout << "S2" <<p2->name<<"的分数:"<<p2->score<<endl;
    
}