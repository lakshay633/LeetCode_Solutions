
#include <iostream>
#include <vector>
using namespace std;

int search(vector<vector<int>>& arr, int k) {
    int row = arr.size();
    int col = arr[0].size();
    int end = (row * col) -1;
    int start = 0;
    int mid= start + ((end - start)/2); 
    while (start<end)
    {
        if (k == arr[mid/col][mid%col])
        {
            return mid;
        }
        else if (k>arr[mid/col][mid%col])
        {
            start= mid +1;
        }
        else
        {
            end = mid -1;
        }
        mid= start + ((end - start)/2);    
    }
    return -1;
}
int main()
{
    vector<vector<int>> arr {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; 
    cout<< search(arr,4);
    return 0;
}