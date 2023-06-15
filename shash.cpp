//Writing the function to find the max element of the array

#include<iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[],int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    return max;
}
cout<<"Hello World";
int findMin(int arr[],int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]< min)
        {
            min = arr[i];
        }
        
    }
    return min;
}
int main(){
    int arr[10] = {2,3,4,5,6,7,86,75,43,545534353 };
    cout<<findMax(arr,10)<<endl;
    cout<<findMin(arr,10);

    return 0;
}