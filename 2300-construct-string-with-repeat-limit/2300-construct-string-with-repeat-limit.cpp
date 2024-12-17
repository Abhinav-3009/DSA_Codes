class Solution {
public:
    string repeatLimitedString(string s, int rl) {
        vector<int> freq(26,0);

        for(char c : s){
            freq[c - 'a']++;
        }
        
        priority_queue<pair<char,int>> pq;
        
        for(int i = 0; i < 26; i++){
            if(freq[i] > 0){
                pq.push({'a' + i, freq[i]});
            }
        }

        string result = "";

        while(!pq.empty()){
            auto[ch1, cnt1] = pq.top();
            pq.pop();
            int add = min(cnt1, rl);
            result.append(add, ch1);
            cnt1 = cnt1 - add;

            if(cnt1 > 0){
                if(pq.empty())
                    break;
                auto[ch2, cnt2] = pq.top();
                pq.pop();
                result += ch2;
                cnt2--;

                if(cnt2 > 0)
                    pq.push({ch2,cnt2});
                pq.push({ch1, cnt1});
            }
        }
        return result;
    }
};