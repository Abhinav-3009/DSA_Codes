class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int mi=0;
	    int ind=0;
	    for(int i=0;i<n;i++){
	        int c=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                c+=1;
	            }
	        }
	        if(c>mi){
	            mi=c;
	            ind=i;
	        }
	    }
	    if(mi==0)
	    return -1;
	    return ind;
	}

};
