class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        if(n<2){
            return values[0] + values[1] - 1;
        }
        vector<int> suf(n);
        suf[n-1] = values[n-1] - (n-1);
        for(int j = n-2; j>=0; j--){
            suf[j] = max(suf[j+1], values[j] - j);
        }
        int ans = INT_MIN;
        for(int i = 0; i < n-1; i++){
            ans = max(ans, values[i] + i + suf[i+1]);
        }

        return ans;
    }
};
