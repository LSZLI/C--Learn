#include<iostream>
#include<stdio.h>

int main()
{
    int arr[5] = {100,213,131,134,234};
    int max = 0;
    for(int i = 0;i < 5;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i]; 
        }
    }
    std::cout<<max;
    return 0;
}