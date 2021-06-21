#define ll long long int


//User function template for C++
class Solution{
public:

// Function to find maximum product subarray
long long maxProduct(int *A, int N ) {

ll maxP , minP , res ;

maxP = minP = res = 1 ;

for( int i = 0 ; i < N ; i++ )
{
ll x = A[i];

if( x < 0 ) swap( maxP , minP );

maxP = max( x , x*maxP );
minP = min( x , x*minP );

res = max( res , maxP );
}


return res ;

}
};
