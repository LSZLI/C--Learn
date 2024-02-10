#include<iostream>
using namespace std;


void paixu(int * arr,int len){
    for(int i = 0;i < len - 1;i++){
        for(int j = 0;j < len - 1 -i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}    
int main(){
    int arr[5]={12,8,3,9,6};
    cout << "before" << endl;
    for(int i = 0;i<5;i++){
        cout << "arr is " <<arr[i]<<endl;
    }
    int len =sizeof(arr) / sizeof(arr[0]);
    int * arrp = arr;
    paixu(arr,5);
    cout << "now" << endl;
    for(int i = 0;i<5;i++){
        cout << "arr is " <<arr[i]<<endl; 
    }
}
    