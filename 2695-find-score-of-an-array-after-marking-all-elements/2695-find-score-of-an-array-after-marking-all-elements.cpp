class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> store;
        for(int i = 0; i < n; i++){
            store.push_back({nums[i],i});
        }
        sort(store.begin(), store.end());


        long long ans = 0;

        for(int i = 0; i < n; i++){
            int number = store[i].first;
            int index = store[i].second;
            if(nums[index] != -1){
                ans += number;
                nums[index] = -1;
                if(index > 0){
                    nums[index - 1] = -1;
                }
                if(index < n-1){
                    nums[index + 1] = -1;
                }
            }
        }
        return ans;


    }
};