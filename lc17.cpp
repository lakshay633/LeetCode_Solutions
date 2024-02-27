class Solution {
    void solve(string digits,vector<string>& ans,int i,string output,string *m){
        if(digits.length()<=i){
            ans.push_back(output);
            return;
        }
        int n=digits[i]-'0';
        string a=m[n-2];
        for(int x=0;x<a.length();x++){
            output.push_back(a[x]);
            solve(digits,ans,i+1,output,m);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0) return ans;
        string output;
        int i=0;
        string m[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,i,output,m);
        return ans;
    }
};