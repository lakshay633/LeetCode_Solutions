
#include <iostream>
#include <vector>
using namespace std;

bool search(vector<vector<int>>& arr, int k) {
    int row = arr.size();
    int col = arr[0].size();
    int colIndex = col -1;
    int rowIndex = 0;
    while (rowIndex<row && colIndex>=0)
    {
        int a = arr[rowIndex][colIndex];
        if (a == k)
        {
            return 1;
        }
        if (a < k)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}
int main()
{
    vector<vector<int>> arr {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}}; 
    cout<< search(arr,3);
    return 0;
}