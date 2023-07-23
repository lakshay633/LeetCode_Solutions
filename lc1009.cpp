//complement of base 10 integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        if(m==0){
            return 1;
        }
        int mask =0;
        while(m!=0){
            mask = (mask<<1)|1;
            m=m>>1;
        }
        return ((~n) & mask);
    }
};