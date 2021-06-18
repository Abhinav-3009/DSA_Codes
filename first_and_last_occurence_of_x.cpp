vector<int> find(int arr[], int n , int x )
{
vector<int>ans;
int i = lower_bound(arr,arr+n,x)-arr;
int j = upper_bound(arr,arr+n,x)-arr;
if(i>j-1)
{
ans.push_back(-1);
ans.push_back(-1);
return ans;
}else{
ans.push_back(i);
ans.push_back(j-1);
return ans;
}
}
