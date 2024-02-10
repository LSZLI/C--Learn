#include<iostream>
using namespace std;

const float PI = 3.14f;

class circle {
    //fangwenquanxian
public:
    //sshuxing
    int r;

    //xingwei
    float cd(int r){
        return 2*PI*r;
    }

};
int main(){
    circle c1;
    c1.r = 100;
    cout<<c1.cd(c1.r)<<"\n";

}