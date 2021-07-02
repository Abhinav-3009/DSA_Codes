class Solution{
public:
    bool find3Numbers(int a[], int n, int x)
    {
        //Your Code Here
        int j,k;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            j=i+1;
            k=n-1;
            int p=a[i];
            while(j<k){
                int sum=p+a[j]+a[k];
                if(sum==x)
                return 1;
                else if(sum>x)
                k--;
                else
                j++;
            }
        }
        return 0;
    }

};
