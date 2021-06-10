#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {

public: void solve (int open,int closed, string op, vector<string> &ans){

if(open==0 &&closed == 0){
ans.push_back(op);
return;
}

else{
if (open!=0 && closed>open){
string op1 = op;
string op2 = op;

op1.push_back('(');
op2.push_back(')');

solve(open-1, closed,op1,ans);
solve(open,closed-1,op2,ans);
}else if(open!=0 && open ==closed){
string op1 = op;
op1.push_back('(');
solve(open-1, closed,op1,ans);
}else if (open==0 && closed !=0){
string op1 = op;
op1.push_back(')');
solve(open,closed-1,op1,ans);
}

}



}
vector<string> AllParenthesis(int n)
{
vector<string> ans;
string op = "(";
solve(n-1,n,op,ans);
return ans;
}
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
