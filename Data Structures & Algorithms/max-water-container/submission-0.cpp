class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j =heights.size()-1;

        int res = 0;
        
        while(i < j){
            int area = min(heights[i],heights[j]) * ( j - i);

            res = max(area,res);

            if(heights[i] > heights[j])
                j--;
            else{
                i++;
            }
        }


        return res;
    }
};
