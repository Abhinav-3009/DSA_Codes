class Solution {
public:

    bool checkIfVowel(string word){
        int n = word.size();
        if((word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') && (word[n-1] == 'a' || word[n-1] == 'e' || word[n-1] == 'i' || word[n-1] == 'o' || word[n-1] == 'u')){
                    return true;
                }
        return false;
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> res;
        vector<int> prefix(words.size(),0);
        if(checkIfVowel(words[0])){
            prefix[0] = 1;
        }
        for(int i = 1; i < words.size(); i++){
            if(checkIfVowel(words[i])){
                prefix[i] = prefix[i-1] + 1;
            }
            else{
                prefix[i] = prefix[i-1];
            }
        }
        for(auto it: queries){
            int left = it[0];
            int right = it[1];
            int count = 0;
            if(left == 0)
            count = prefix[right];
            else
            count = prefix[right] - prefix[left-1];
            res.push_back(count);
        }
        return res;
    }
};