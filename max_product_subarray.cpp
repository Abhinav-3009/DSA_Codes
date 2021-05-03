#include<bits/stdc++.h>
using namespace std;

int max_product( int a[], int n)
{
    int max_neg=INT_MIN;
    int count_neg=0;
    int count_zero=0;
    int pro=1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count_zero++;
            continue;
        }
        if(a[i]<0){
            count_neg++;
            max_neg=max(max_neg,a[i]);
        }
        pro=pro*a[i];
    }

    if(count_zero==n)
        return 0;
    if(count_neg%2!=0){
        if (count_neg == 1 && count_zero > 0 && count_zero + count_neg == n)
            return 0;
        pro=pro/max_neg;
    }
    return pro;
}

int main()
{
    int a[] = {  -1, -1, -2, 4, 3  };
    int n = sizeof(a) / sizeof(a[0]);
    cout << max_product(a, n);
    return 0;
}
