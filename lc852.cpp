// Peak Index in a Mountain Array

#include <iostream>
using namespace std;

int peak(int arr[],int size){
    int s = 0,e = size - 1;
    int mid=s+((e-s)/2); //modified (s+e)/2 so that max of int isn't reached
    while (s<e){
        if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if (arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
    return s;
}
int main()
{
    int arr[]={3,5,3,2,0};
    int s = sizeof(arr)/4;
    int res = peak(arr,s);
    cout<<res<<endl;
    return 0;
}