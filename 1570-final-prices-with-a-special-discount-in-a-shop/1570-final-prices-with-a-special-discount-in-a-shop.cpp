class Solution {
public:

    int nextSmallerElement(vector<int>& prices, int index, int n){
        for(int i = index+1; i < n; i++){
            if(prices[index] >= prices[i]){
                return prices[i];
            }
        }
        return 0;
    }

    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();

        for(int i = 0; i < n; i++){
            prices[i] -= nextSmallerElement(prices, i, n);
        }

        return prices;
    }
};