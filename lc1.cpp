class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i =0;i<size(nums);i++){
            for (int j=i+1;j<size(nums);j++){
                if (nums[i]+nums [j] == target){
                    ans.push_back(i);
                    ans.push_back(j); 
                    break;
                }
            }
        }
        return ans;
    }
};