#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int res=0;
    vector<int> a;
    for(int i=0;i<num.size();i++){
        switch (num[i])
        {
        case 'M':
            a.push_back(1000);
            break;
        case 'D':
            a.push_back(500);
            break;
        case 'C':
            a.push_back(100);
            break;
        case 'L':
            a.push_back(50);
            break;
        case 'X':
            a.push_back(10);
            break;
        case 'V':
            a.push_back(5);
            break;
        case 'I':
            a.push_back(1);
            break;
        default:
            cout<<"Invalid Input";
            goto exit;
        }
    }
    for(int i=0;i<a.size()-1;i++){
        if (a[i]<a[i+1])
        {
            res-= a[i];
        }
        else
        {
            res+= a[i];
        }
    }
    res+= a[a.size()-1];
    cout << res ;
    exit:
    return 0;
}