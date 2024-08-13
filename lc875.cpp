class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1,e =0;
        for(int i=0;i<piles.size();i++)if(piles[i]>e)e=piles[i];
        while (s<=e){
        int mid=s+((e-s)/2);
        long long time=0;
        for(int i=0;i<piles.size();i++){
            if((piles[i]%mid)!=0){time += piles[i]/mid +1;}
            else{time += piles[i]/mid;}
        }
        if (time <= h){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;
    }
};