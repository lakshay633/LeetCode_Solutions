//724. Find Pivot Index
//https://leetcode.com/problems/find-pivot-index/


#include <iostream>
using namespace std;
int suml(int arr[],int mid){
    int sum = 0;
    for (mid; mid > 0; mid--)
    {
        sum = sum + arr[mid - 1];
    }
    return sum;    
}
int sumr(int arr[],int mid, int size){
    int sum = 0;
    for (mid; mid < (size-1); mid++)
    {
        sum += arr[mid+1];
    }
    return sum;    
}
int pivot(int arr[],int size){
    int s = 0,e = size - 1;
    int mid=s+((e-s)/2); //modified (s+e)/2 so that max of int isn't reached
    while (s<e){
        if (sumr(arr,mid,size) == suml(arr,mid)){
            return mid;
        }
        else if (sumr(arr,mid,size) > suml(arr,mid)){
            s=mid;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
    return -1;
}
int main()
{
    int arr[]={1,7,3,6,5,6};
    int s = sizeof(arr)/4;
    int res = pivot(arr,s);
    cout<<res<<endl;
    return 0;
}