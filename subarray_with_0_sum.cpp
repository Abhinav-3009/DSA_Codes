class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int N)
{
//Your code here
unordered_set<int> us;
int sum = 0;
for(int i = 0; i < N; i++){
sum += arr[i];
if(us.find(sum) != us.end() || arr[i] == 0 || sum == 0) return true;
us.insert(sum);
}

return false;

}
};
