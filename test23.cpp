#include<iostream>
#include<string>
using namespace std;


struct video{
   //name
   string videoname;
   // time long
   int time;
 };//重点！！！！
int main(){
    struct video v1;
    v1.videoname = "Liu lang di qiu";
    v1.time=3;
    cout <<v1.videoname<< endl;
    cout <<v1.time<< endl;
}