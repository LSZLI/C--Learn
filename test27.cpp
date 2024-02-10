#include<iostream>
using namespace std;

int* fu(){
	int *a = new int(10);
	return a+b;
}
int main(){
	int *p = fu();
	
	cout<<*p<<"\n";
	cout<<*p<<"\n";
}