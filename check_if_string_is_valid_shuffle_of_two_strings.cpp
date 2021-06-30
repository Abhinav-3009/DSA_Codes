#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2;
    cin>>s3;
    if(s1.length()+s2.length()!=s3.length()){
        cout<<"false";
    }
    else{
        int f=0,i=0,j=0,k=0;
        while(k<s3.length()){
            if(i<s1.length() && s1[i]==s3[k])
                i++;
            else if(j<s2.length() && s2[j]==s3[k])
                j++;
            else{
                f=1;
                break;
            }
            k++;
        }
        if(i<s1.length() || j<s2.length())
            cout<<"false";
        else
            cout<<"true";
    }
    return 0;
}
