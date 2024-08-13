class Solution {
public:
    int search(vector<int>& arr, int key) {
        int s = 0,e = arr.size() - 1;
        while (s<=e){
        int mid=s+((e-s)/2);
        if(key == arr[mid]){
            return mid;
        }
        else if (key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
    }
};