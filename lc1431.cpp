class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)<max){
                result.push_back(false);
            }
            else{
                result.push_back(true);
            }
        }
        return result;
    }
};