class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int i=0, j=0;
        while(i< s.length() && j< t.length() && s.length()>= t.length()) {
            if(s[i]=='z'){
                if(t[j]==s[i]  || t[j]=='a'){
                    i++; j++;
                }
                else{
                    i++;
                }
            }
            else if(t[j]==s[i]  || t[j]-'a'==(s[i]-'a')+1) {
                i++; j++;
            }
            else {
                i++;
            }
        }

        if(j==t.length()) return true;
        return false;
    }
};