class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       priority_queue<int> max_heap;
int count=0;
for(int i=l;i<=r;i++)
{
max_heap.push(arr[i]);
count++;
if(count>k)
{
max_heap.pop();
}

}
return max_heap.top();
        //code here
    }
};
