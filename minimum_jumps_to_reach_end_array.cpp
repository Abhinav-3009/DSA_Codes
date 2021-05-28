#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int jumps[n];
    jumps[0]=0;
    for(int i=1;i<n;i++){
            jumps[i]=INT_MAX;
        for(int j=0;j<i;j++){
            if(jumps[j]!=INT_MAX && i<=arr[j]+j){
                if(jumps[j]+1<jumps[i]){
                    jumps[i]=jumps[j]+1;
                }
            }
        }
    }
    if(jumps[n-1]!=INT_MAX)
        cout<<jumps[n-1]<<endl;
    else
        cout<<"nope";
    return 0;
}
