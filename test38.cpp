#include"ainclude.h"
using namespace std;

int value = 1;

int main(int argc, char *argv[])
{
    int value = 10;

    cout<<::value<<endl; //全局作用域
    cout<<value<<endl;   //局部作用域
    return 0;
}