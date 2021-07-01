class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        if(n==1)
            return res;
        for(int i=2;i<=n;i++){
            int c=1;
            char ch=res[0];
            string temp="";
            for(int j=1;j<res.size();j++){
                if(ch!=res[j]){
                    temp+=to_string(c)+ch;
                    c=0;
                    ch=res[j];
                }
                c++;
            }
            temp+=to_string(c)+ch;
            res=temp;
            }
        return res;
            
        
    }
};
