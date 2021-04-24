vector<vector<string>> Anagrams(vector<string>& strs)
{
vector<vector<string>> ans;

int n=strs.size();

if(n==0)
return ans;

unordered_map<string,vector<string>> m;

for(auto i:strs)
{
string s=i;
sort(s.begin(),s.end());
m[s].push_back(i);
}

for(auto i:m)
ans.push_back(i.second);

return ans;
}
