class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i--;    
            }
        }
        int res = nums.size();
        int temp = nums.size();
        for(int i=0;i<n-temp;i++)
            nums.push_back(0);
        return res;
    }
};