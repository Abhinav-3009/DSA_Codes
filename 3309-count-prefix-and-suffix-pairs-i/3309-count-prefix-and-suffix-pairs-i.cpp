class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            int n1 = words[i].size();
            string s1 = words[i];
            for(int j = i+1; j < n; j++){
                int n2 = words[j].size();
                string s2 = words[j];
                if(n2 < n1){
                    continue;
                }
                if(s2.substr(0,n1) == s1 && s2.substr(n2-n1, n1) == s1){
                    ans++;
                }
            }
        }
        return ans;
    }
};