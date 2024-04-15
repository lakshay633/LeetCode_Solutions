class Solution {
public:
    void calcSubset(vector<int>&nums,vector<vector<int>>&ans,vector<int>&subset,int index, int target){
        if (target == 0) {
            ans.push_back(subset);
            return;
        }
        
        for (int i = index; i < nums.size(); i++) {
            if (target - nums[i] < 0) 
                continue;
            
            subset.push_back(nums[i]);
            calcSubset(nums, ans, subset, i, target - nums[i]); 
            subset.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> subset;
        vector<vector<int>> ans;
        int index = 0;
        calcSubset(nums, ans, subset, index,target);
        return ans;
    }
};