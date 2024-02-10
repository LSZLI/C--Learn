#define MAX 20
#include<iostream>
#include<string>
#include<stdio.h>
#include"shjiananli.h"
using namespace std;


struct man{
    string name;
    int phone;
};
struct man_list{
	man arr[MAX];
	int ren;
};
void adduser(man_list * a){
	string xingname;
	int phone = 0;
	if(a->ren == MAX){
		cout<<"THE BOOK IS MAN FUCK YOU GUN!\n";
	}
	else{
		cout<<"NAME \n";
		cin>>xingname;
		cout<<"PHONE\n";
		cin>>phone;
		a->arr[a->ren].name = xingname;
		//cout<<a->ren<<"\n";
		a->arr[a->ren].phone = phone;
		//cout<<a->ren<<"\n";
		a->ren++;
		cout<<endl;
	};
}
void listman(man_list * a){
	if (a->ren == 0)
	{
		cout<<"KUAI JIA !!!!!"<<endl;
	}
	else{
		for (int i = 0;i < a->ren;i++){
			cout<<a->arr[i].name<<"\t";
		//	cout<<i<<"\n";
			cout<<a->arr[i].phone<<"\t";
		//	cout<<i<<"\n";
			cout<<"\n";
		}
	}
}

int isexit(man_list * abs,string name){
	for(int i = 0;i == abs->ren;i++){
		if(abs->arr[i].name == name){
			return i;
		}
		else{
			cout<<"GUNNIMA";
			return -1;
		}
	}
}
void remman(man_list * a){
	string name;
	int ww;
	cout<<"NAME?\n";
	cin>>name;
	ww = isexit(a,name);
	if(ww == -1){
		cout<<"GUN!";
	}
	else{
		for (int i = ww;i < a->ren;i++){
			a->arr[ww] = a->arr[ww++];
		}
		a->ren--;
		
	}
}
void searchJB(man_list * a){
	string name;
	cout<<"NAME?\n";
	cin>>name;
	int www = isexit(a,name);
	if(www != -1){
		cout<<a->arr[www].name<<"\t";
		cout<<a->arr[www].phone<<"\t"<<endl;
	}
}
int main(){
  man_list man_l;
  man_l.ren = 0;
  while(1){
  menulist();
  int select = 0;
  cin>>select;
  string name;
  switch(select){
	case 0:
	    return 0;
    case 1:
        adduser(&man_l);
		break;
    case 2:
		listman(&man_l);
		break;
    case 3:
		remman(&man_l);
	    break;
    case 4:
		searchJB(&man_l);
		break;
    }
  }
}
