class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(n == 0) return true;

        int fool = flowerbed.size();

        for(int i=0; i<fool; i++){
            if(flowerbed[i] == 0 && (i==0 || flowerbed[i-1]==0) && (i==fool-1 || flowerbed[i+1] == 0)){
                n--;
                if(n == 0) return true;

                flowerbed[i] = 1;
            }
        }
        return false;
    }
};
