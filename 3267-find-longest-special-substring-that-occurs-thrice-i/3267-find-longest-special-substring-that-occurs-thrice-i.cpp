class Solution {
public:
    int f(string& s, int n)
    {
        unordered_map<string, int> map;
        for(int i=0;i<=s.length()-n;i++)
        {
            int cnt=1;
            int j=i;
            while(s[j]==s[j+1] && j<s.length()) 
            {
                cnt++;j++;
            }


            if(cnt>=n){
                string x="";
                for(int j=0;j<n;j++) x=x+s[i];
                map[x]++;
                if(map[x]==3) return n;
            }
        }

        return -1;
    }

    int maximumLength(string s) {
        int ans=-1;
        for(int i=1; i<s.length(); i++) 
        {
            int x=f(s,i);
            if(x!=-1) ans=x;
        }

        return ans;
    }
};