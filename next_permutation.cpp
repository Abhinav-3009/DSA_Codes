class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1;
        int bp;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                k=i;
                bp=i-1;
                break;
            }
        }
        if(k==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>=k;i--){
            if(nums[i]>nums[bp]){
                swap(nums[i],nums[bp]);
                break;
            }
        }
        reverse(nums.begin()+k,nums.end());
        return ;
    }
};
