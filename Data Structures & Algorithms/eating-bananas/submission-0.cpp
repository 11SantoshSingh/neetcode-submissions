class Solution {
public:
    bool canEat(vector<int>& piles, int h, int mid){
        int n = piles.size();

        for(int i=0;i<n;i++){
            int k = ((piles[i] + mid -1)/mid);

            if(h - k < 0){
                return false;
            }else{
                h -= k;
            }
        }

        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int mini = *max_element(piles.begin(),piles.end());
        
        int i = 1;
        int j =mini;

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
