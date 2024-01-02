#include <iostream>
#include <string>
using namespace std;
string reverseVowels(string s) {
    string v="aeiouAEIOU";
    int i=0,j=s.size()-1;
    while (i<j)
    {
        bool b1=(v.find(s[i])<v.size());
        bool b2=(v.find(s[j])<v.size());
        if (!b1){
            i++;
            continue;
        }
        if (!b2){
            j--;
            continue;
        }
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}
int main()
{
    string a = "ai";
    string b = reverseVowels(a);
    cout<<b;
    return 0;
}