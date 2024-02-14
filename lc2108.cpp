class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i=0;i<words.size();i++){
            string temp = words[i];
            reverse(words[i].begin(),words[i].end());
            if(words[i]==temp)
                return words[i];
        }
        return "";
    }
};



// class Solution {
// public:
//     bool pal(string s, int start, int end){
//         if(end<=start)
//             return true;
//         if(s[start]!=s[end])
//             return false;
//         return pal(s,++start,--end);
//     }
//     string firstPalindrome(vector<string>& words) {
//         for (int i=0;i<words.size();i++){
//             if(pal(words[i],0,(words[i].size()-1))){
//                 return words[i];
//             }
//         }
//         return "";
//     }
// };