class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = 0, left = 0;
        int count = 0;

        for(int x: nums){
            total += x;
        }

        for(int i = 0; i < nums.size()-1; ++i){
            left += nums[i];
            if(left >= total-left){
                count++;
            }
        }
        return count;
    }
};