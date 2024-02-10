#include<iostream>

int main()
{
    int arr[] = {1,2,3,4,5};
    for(int i = 0;i < 5;i++)
    {
           std::cout<<arr[i];
    }
    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0]) -1;
    while(s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    for(int i = 0;i < 5;i++)
    {
      std::cout<<arr[i];
    }
}