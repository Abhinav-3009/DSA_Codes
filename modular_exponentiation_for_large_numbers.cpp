class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
{
if(n==1)
return x;
else if(n%2==0)
return PowMod(x,n/2,M)*PowMod(x,n/2,M)%M;
else
return x*PowMod(x,n/2,M)*PowMod(x,n/2,M)%M;
}
};
