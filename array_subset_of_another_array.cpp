string isSubset(int a1[], int a2[], int n, int m) {
    multiset<int> m1;
    for(int i=0;i<n;i++){
        m1.insert(a1[i]);
    }
    for(int j=0;j<m;j++){
        if(m1.find(a2[j])==m1.end())
        return "No";
    }
    return "Yes";
    
}
