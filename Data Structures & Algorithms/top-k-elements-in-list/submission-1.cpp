class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        

        //first make the hashmap

        unordered_map<int,int> mpp;

        for(auto num:nums){
            mpp[num]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

        for(auto nm:mpp){
            pq.push({nm.second, nm.first});
            if(pq.size() > k){
                pq.pop();
            }
        }

        vector<int> ans;

        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
