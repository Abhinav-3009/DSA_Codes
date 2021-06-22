#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int> v;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            v.push_back(arr[i]);
        }
    }
    int ans=0;
    int c=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]-1){
            c++;
        }
        ans=max(ans,c);
    }
    cout<<ans;
    return 0;
}
