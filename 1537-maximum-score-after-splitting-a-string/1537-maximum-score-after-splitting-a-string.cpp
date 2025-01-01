class Solution {
public:
    int maxScore(string s) {
        int zero = 0;
        int one = 0;
        int score = INT_MIN;
        int n = s.size();
        for(int i = 0; i < n-1; i++){
            if(s[i] == '1')
            one++;
            else
            zero++;

            score = max(score, zero - one);
        }
        if(s[n-1] == '1')
        one++;

        return score+one;
    }
};