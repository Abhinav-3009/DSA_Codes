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
    int maxi=arr[0];
    int mini=arr[0];
    for(int i=1;i<n;i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi<<" "<<mini;
    return 0;
}
