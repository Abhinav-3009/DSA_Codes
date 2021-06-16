#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n][n];
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int top=0, down=n-1,left=0,right=n-1;
    int dir=0;
    vector<int> ans;
    while(top<=down && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++)
                ans.push_back(a[top][i]);
            top+=1;
        }
        else if(dir==1){
            for(int i=top;i<=down;i++)
                ans.push_back(a[i][right]);
            right--;
        }
        else if(dir==2){
            for(int i=right;i>=left;i--)
                ans.push_back(a[down][i]);
            down--;
        }
        else if(dir==3){
            for(int i=down;i>=top;i--)
                ans.push_back(a[i][left]);
            left+=1;
        }
        dir=(dir+1)%4;
    }
    for(int i=0;i<n*n;i++){
            cout<<ans[i]<<" ";
    }

}
