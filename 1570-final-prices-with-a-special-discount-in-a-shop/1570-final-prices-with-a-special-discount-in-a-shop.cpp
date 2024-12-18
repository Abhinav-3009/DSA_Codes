class Solution {
public:
vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> s;
        for(int i = n-1; i >= 0; i--){
            while(!s.empty() && s.top() > prices[i]){
                s.pop();
            }
            int nge = s.empty() ? 0 : s.top();
            s.push(prices[i]);
            prices[i] -= nge;

        }
        return prices;
    }
};