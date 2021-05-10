class Solution {
public:

    int countPrimes(int n) {
        if(n<2)return 0;
        vector<int>p(n+1,0);
        
        for(int i=2;i*i<=n;i++)
        {
            if(p[i])continue;
            for(int j=2*i;j<=n;j+=i)
            {
               p[j]=1;
            }
        }
        int ans=0;
        p[1]=1;
        for(int i=1;i<n;i++)
        {
            if(p[i]==0)ans++;
        }
        return ans;
        
    }
};
