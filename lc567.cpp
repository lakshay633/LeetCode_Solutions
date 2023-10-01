#include <iostream>
using namespace std;

int check(int c1[26],int c2 [26]){
    for (int i=0;i<26;i++){
        if(c1[i]!=c2[i]) {
            return 0;
        }
    }
    return 1;
}
bool checkInclusion(string s1, string s2) {
    // char count arr for s1
    int c1 [26]={0};
    for (int i=0;i<s1.length();i++){
        int n=s1[i] - 'a';
        c1[n]++;
    }
    //traversing s2 in window of size s1
    int i=0;
    int windowSize= s1.length();
    int c2[26]={0};
    //running for 1st window
    while(i<windowSize&& i<s2.length()){
        int n=s2[i]-'a';
        c2[n]++;
        i++;
    }
    if(check(c1,c2))
        return 1 ;
    //running for 2nd and onwards window
    while(i<s2.length()){
        char newChar = s2[i];
        int n = newChar -'a';
        c2[n]++;
        char old = s2[i-windowSize];
        n = old - 'a';
        c2[n]--;
        i++;
        if(check(c1,c2))
            return 1 ;
    }
    return 0;
}
int main()
{
    string s1="ab";
    string s2 = "xxxbaxxx";
    bool a = checkInclusion( s1, s2);
    cout <<a;
    return 0;
}
