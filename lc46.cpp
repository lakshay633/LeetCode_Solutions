class Solution {
    void solve(vector<int>& nums,vector<vector<int>>& a,int i){
        if(i>=nums.size()){
            a.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            solve(nums,a,i+1);
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> a;
        int i=0;
        solve(nums,a,i);
        return a;
    }
};

// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) 
//     {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> res;
//         do res.push_back(nums);
//         while(next_permutation(nums.begin(),nums.end()));
//         return res; 
//     }
// };