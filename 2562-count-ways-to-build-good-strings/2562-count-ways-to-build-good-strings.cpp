#define mod 1000000007

class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, 0); // dp[len] stores the number of ways to form a good string of length `len`
        dp[0] = 1; // Base case: 1 way to form an empty string

        for (int len = 1; len <= high; ++len) {
            if (len >= zero) dp[len] = (dp[len] + dp[len - zero]) % mod; // Add ways from length `len - zero`
            if (len >= one) dp[len] = (dp[len] + dp[len - one]) % mod;  // Add ways from length `len - one`
        }

        int ans = 0;
        for (int len = low; len <= high; ++len) {
            ans = (ans + dp[len]) % mod;
        }

        return ans;
    }
};