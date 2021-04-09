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
    int total_max=INT_MIN;
    int curr_max=0;
    int s=0;
    int first=0;
    int last=0;
    for(int i=0;i<n;i++)
    {
        curr_max+=arr[i];
        if(total_max<curr_max)
        {
            total_max=curr_max;
            first=s;
            last=i;
        }
        if(curr_max<0)
        {
            curr_max=0;
            s=i+1;
        }
    }
    cout<<"max sum= "<<total_max<<endl;
    cout<<"starting index = "<<first<<" ending index = "<<last<<endl;
    return 0;
}
