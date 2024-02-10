#include<iostream>
using namespace std;

void swap (int num1,int num2)
{
	int temp;
	cout<<"Swap last"<<num1<<num2<<endl;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"Swap now"<<num1<<num2<<endl;
	
}
