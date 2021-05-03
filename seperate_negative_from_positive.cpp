#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]<0)
            i++;
        else{
            swap(arr[i],arr[j]);
            j--;
        }
    }
    for(int x=0;x<n;x++)
    {
        cout<<arr[x]<<" ";
    }
    return 0;
}
