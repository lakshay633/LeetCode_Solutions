class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int p=0,n=1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                ans[p]=nums[i];
                p+=2;
            }
            if(nums[i]<0){
                ans[n]=nums[i];
                n+=2;
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> p, n;
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] > 0)
//                 p.push_back(nums[i]);
//             else
//                 n.push_back(nums[i]);
//         }
//         nums.clear();
//         int i = 0, j = 0;
//         while (i < p.size() || j < n.size()) {
//             if (i < p.size())
//                 nums.push_back(p[i++]);
//             if (j < n.size())
//                 nums.push_back(n[j++]);
//         }
//         return nums;
//     }
// };