//subtract the product and sum of the digits of an integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int d,s=0,p=1;
        while(n!=0){
            d=n%10;
            s=s+d;
            p=p*d;
            n=n/10;
        }
        int r = p-s;
        return r;
    }
};