#include<bits/stdc++.h>
using namespace std;
class graph
{
public:
    map<int,bool> visited;
    map<int,list<int> > adj;

    void addedge(int v, int w)
    {
        adj[v].push_back(w);
    }

    void dfs(int v)
    {
        visited[v]=true;
        cout<<v<<" ";
        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i){
            if(!visited[*i])
                dfs(*i);
        }
    }
};

int main()
{
    graph g;
    g.addedge(0,1);
    g.addedge(0,9);
    g.addedge(1,2);
    g.addedge(0,1);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(9,3);
    g.dfs(2);
    return 0;
}
