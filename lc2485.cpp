class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        for(int i=(n/2);i<n;i++){
            int s1=((i+1)*(i+2))/2;
            int s2= (n-i)*(i+1+n)/2;
            cout<<s1<<" "<<s2;
            if(s1==s2)return i+1;
        }
        return -1;
    }
};