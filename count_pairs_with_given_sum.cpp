class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        int x,c=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            x=k-arr[i];
            if(m[x]==0){
                m[arr[i]]++;
            }
            else{
                c+=m[x];
                m[arr[i]]++;
            }
        }
        return c;
    }
};
