class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(int i = 0; i < nums.size(); i++){
            pq.push({nums[i],i});
        }

        while(k--){
            int minIndex = pq.top().second;
            pq.pop();
            nums[minIndex] = nums[minIndex] * multiplier;
            pq.push({nums[minIndex],minIndex});
        }
        return nums;
    }
};