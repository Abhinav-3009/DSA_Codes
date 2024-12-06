class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> ban(banned.begin(), banned.end());
        int ans = 0;
        int currSum = 0;

        for(int i = 1; i <=n; i++){
            if(ban.find(i) == ban.end()){
                currSum += i;
                if(currSum <= maxSum){
                    ans++;
                }
                else
                break;
            }
        }
        return ans;
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();