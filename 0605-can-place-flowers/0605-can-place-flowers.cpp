class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // int count1 = 0;
        // int flwrbd = flowerbed.size();
        // for(int i=0; i<flwrbd; i++){
        //     if(flowerbed[i] == 1) count1++;
        // }

        // if(flwrbd % 2) { // odd
        //     if(count1 + n > flwrbd/2 + 1) return false;
        //     if(count1 + 1 == flwrbd/2 + 1) return true;
        //     if(count1 + n == flwrbd/2 + 1 && (flowerbed[0] == 0 || flowerbed[flwrbd-1] == 0)) return false;
        //     return true;
        // }
        // else { // even
        //     if(count1 + n > flwrbd/2) return false;
        //     if(count1 + n == flwrbd/2 + 1 && (flowerbed[0] == 0 || flowerbed[flwrbd-1] == 0)) return false;
        //     return true;
        // }

        int maxflowers = 0;
        if(flowerbed.size() == 1) {
            if(flowerbed[0] == 0 && n <=1) return true;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            maxflowers++;
        }
        for(int i=1; i<flowerbed.size()-1; i++) {
            if(flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i-1] ==0){
                flowerbed[i] = 1;
                maxflowers++;
            } 
        }
        if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0) {
            maxflowers++;
        }
        if(n <= maxflowers) return true;
        return false;
    }  
};