class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int a=0;
        int s=flowerbed.size();
        if (flowerbed[0]+flowerbed[1]==0){
            flowerbed[0]=1;
            a++;
        }
        if(s>2){
            for(int i = 1;i<(s-1);i++){
                if(flowerbed[i-1]+flowerbed[i+1]+flowerbed[i]==0){
                    flowerbed[i]=1;
                    a++;
                }
            }
        }
        if (flowerbed[s-1]+flowerbed[s-2]==0){
            flowerbed[s-1]=1;
            a++;
        }
        return (a==n);
    }
};