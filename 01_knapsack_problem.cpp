#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n){
	int i, j;
	int DP[n + 1][W + 1];
	for (i = 0; i <= n; i++){
		for (j = 0; j <= W; j++){
			if (i == 0 || j == 0)
				DP[i][j] = 0;
			else if (wt[i - 1] <= j)
				DP[i][j] = max(val[i-1]+ DP[i-1][j-wt[i-1]] ,DP[i-1][j]);
			else
				DP[i][j] = DP[i-1][j];
		}
	}
	return DP[n][W];
}
int main(){
	int val[] = {1,2,4};
	int wt[] = {2,3,3};
	int W = 6;
	int n = sizeof(val) / sizeof(val[0]);
	cout<<knapSack(W, wt, val, n);
	return 0;
}
