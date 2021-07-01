class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int dp[n];
        for(int i=0;i<n;i++)dp[i]=0;
        int max1=prices[n-1];
        int min1=prices[0];
        for(int i=n-2;i>=0;i--){
            if(prices[i]>max1)max1=prices[i];
            dp[i]=max(dp[i+1],max1-prices[i]);
        }
        for(int i=1;i<n;i++){
            if(prices[i]<min1)min1=prices[i];
            dp[i]=max(dp[i-1],dp[i]+(prices[i]-min1));
        }
        return dp[n-1];
    }
};
