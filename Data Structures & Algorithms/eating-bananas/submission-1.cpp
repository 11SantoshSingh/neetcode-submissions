class Solution {
public:
    bool canEat(vector<int>& piles, int h, int mid){

        for(int i=0;i<piles.size();i++){
            int m = (piles[i] + mid -1)/mid;

            if(h - m < 0){
                return false;
            }

            h -=m;
        }

        return true;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(),piles.end());

        while(i <= j){
            int mid = i + (j-i)/2;

            if(canEat(piles,h,mid)){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }

        return i;
    }
};
