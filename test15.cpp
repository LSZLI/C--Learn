#include <iostream>
using namespace std;

int lj(int num1,int num2);

int main(){
	int a = 10;
	int b = 90;
    int c = lj(a,b);
	cout<<c;
}
int lj(int num1,int num2)
{
	int XX;
	XX = num1+num2;
	return XX;
}
