//power of 2

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int a = 1,i=0;
        while (i<=30 & a<=n){
            if (a == n){
                return true;
            }
            i++;
            if(a<INT_MAX/2)
            a=a*2;
        }
        return false;
    }
};