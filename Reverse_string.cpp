#include<bits/stdc++.h>
using namespace std;
string reverseWord(string s){
int i=0;
int j=s.length()-1;
char temp;
for(;i<=j;i++,j--)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
return s;
}
int main()
{
  string s;
  cin>>s;
  cout<<reverseWord(s)<<endl;
  return 0;
}
