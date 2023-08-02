// Sqrt(x)
// https://leetcode.com/problems/sqrtx/

#include <iostream>
using namespace std;

int sqrt(int n){
    int mid=s+((e-s)/2); //modified (s+e)/2 so that max of int isn't reached
    int ans = -1;
    while (s<=e){
        long long int sq = mid*mid;
        if(sq == n){
            return mid;
        }
        else if (sq<n){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout <<sqrt(n);
    return 0;
}
