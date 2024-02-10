#include<iostream>
#include<string>
using namespace std;
struct student
{

    string name;
    int score;
};
 struct teacher
{
        int id;
        string name;
        struct student stu;
  };
int main()
{
    teacher  t1;
    t1.id=100;
    t1.name="Ddy";
    t1.stu.name="Lsz";
    t1.stu.score=95;
    cout << "老师名" <<t1.name<<"带的学生"<<t1.stu.name<<"考了多少分"<<t1.stu.score<<endl;
    
}