#include<bits/stdc++.h>
using namespace std;


class Student{
    private://私有权限
        int pm;
    public: //公共权限
        int source;
        string name;
        void  yee(){
            source = 126 ;
            name = "lsz ";
            pm = 4;
        }

////protected: //保护权限
};
int main(){
    Student s1;
    s1.yee();
    cout<<s1.name<<"\n"<<s1.source<<"\n";
}
