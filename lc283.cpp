// Move Zeroes

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"enter the no.of elements in the array "<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    
    int nonzero = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]!=0)
        {
            swap(v[i],v[nonzero]);
            nonzero++;
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}