class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int> a;
        while(x!=0){
            int b = x%10;
            x=x/10;
            a.push_back(b);
        }
        int n=a.size();
        for(int i=0;i<(n/2);i++){
            if(a[i]!=a[n-i-1]){
                return false;
            }
        }
        return true;
    }
};