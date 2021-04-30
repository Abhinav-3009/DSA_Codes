#include<bits/stdc++.h>
using namespace std;
#define N 4
bool solvemazeutil(int maze[N][N], int x, int y, int sol[N][N]);

void print(int sol[N][N])
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout<<sol[i][j]<<" ";
        cout<<endl;
    }
}

bool is_safe(int maze[N][N], int x, int y)
{
    if(x>=0 && x<N && y>=0 && y<N && maze[x][y]==1){
        return true;
    }
    return false;
}

bool solvemaze(int maze[N][N])
{
    int sol[N][N]={
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}};
    if(solvemazeutil(maze,0,0,sol)==false){
        cout<<"solution does not exist";
        return false;
    }
    print(sol);
    return true;
}

bool solvemazeutil(int maze[N][N], int x, int y, int sol[N][N])
{
    if(x==N-1 && y==N-1 && maze[x][y]==1){
        sol[x][y]=1;
        return true;
    }
    if(is_safe(maze,x,y)==true)
    {
        if(sol[x][y]==1)
            return false;
        sol[x][y]=1;

        if(solvemazeutil(maze,x+1,y,sol)==true)
            return true;
        if(solvemazeutil(maze,x,y+1,sol)==true)
            return true;
        if(solvemazeutil(maze,x-1,y,sol)==true)
            return true;
        if(solvemazeutil(maze,x,y-1,sol)==true)
            return true;
        sol[x][y]=0;
        return false;

    }
    return false;
}

int main()
{
    int maze[N][N] = { { 1, 0, 0, 0 },
                    { 1, 1, 0, 1 },
                    { 0, 1, 0, 0 },
                    { 1, 1, 1, 1 } };

    solvemaze(maze);
    return 0;
}
