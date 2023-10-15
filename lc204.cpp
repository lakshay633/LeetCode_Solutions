#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 10;
    int count =0;
    vector <bool> prime(n+1, true);
    prime[0]=prime[1]=false;
    for (int i = 0; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (long long j = i*i; j < n; j=j+i)
            {
                prime [j]=0;
            }
        }
    }
    cout<<count;
    return 0;
}