#include <vector>
#include <iostream>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    int min=strs[0].size();
    for (int i = 1; i < strs.size(); i++){
        if (strs[i].size()<min){
            min==strs[i].size();
        }
    }
    for (int i = 0; i < min; i++)
    {
        
    }
    
}
int main()
{
    
    return 0;
}

