#include <iostream>
using namespace std;
string converter(string s){
    string a;
    for(int i=0;i<s.length();i++){
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
            a+=s[i];
        }
        else if((s[i]>='A'&&s[i]<='Z')){
            a+=(s[i]-'A'+'a');
        }
    }
    s=a;
    return s;
}
bool isPalindrome(string s) {
    s = converter(s);
    cout << s;
    int start=0;
    int end = s.length()-1;
    while(start<end){
        if (s[start]!=s[end]){
            return 0;
        }
        start ++;
        end --;
    }
    return 1;
}
int main(){
    string s= "ramma @ _r";
    cout << isPalindrome(s);

}