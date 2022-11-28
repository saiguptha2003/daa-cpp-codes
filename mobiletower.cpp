#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<vector<int>> g(n,vector<int>(n,0));
    
    for(int i=0;i<x;i++)
    {
       int a,b;
        cin>>a>>b;
        g[a][b]=1;
        g[b][a]=1;
    }
    int c=1000;
    int p;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(g[i][j]==1)
            count++;
        }
        if(count<c)
        {
            c=count;
            p=i;
        }
    }
    int q;
    for(int j=0;j<n;j++)
    {
        if(g[p][j]==1)
        {
            q=j;
        }
    }
    int l;
    for(int j=0;j<n;j++)
    {
        if(g[j][q]==1 && j!=p)
        {
            l=j;
        }
    }
    cout<<l<<" "<<q;

}