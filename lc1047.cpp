#include <iostream>
using namespace std;

string removeDuplicates(string s)
{
    int count = s.size();
    for (int i = 0; i < count - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            if (i==0)
            {
                i--;
            }
            else
            {
                i=i-2;
            }
            count = count-2;
        }
    }
    return s;
}
int main()
{
    string s = "abbaca";
    string res = removeDuplicates(s);
    cout << res;
    return 0;
}