#include<bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n,int k)
{
        for(int i=0;i<k;i++)
        {
            int mini = INT_MAX;
            int index=-1;
            for(int j=0;j<n;j++){
                if(mini>arr[j]){
                    mini=arr[j];
                    index=j;
                }
            }
            if(mini==0)
                break;
            arr[index]=-arr[index];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        return sum;
}

int main()
{
    int arr[] = { -2, 0, 5, -1, 2 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_sum(arr, n, k);
    return 0;
}
