/*
name:V D Panduranga Sai Guptha
topic: adjacency list using vector
*/
#include <iostream>
#define N 10
using namespace std;
#include <vector>
void Edge(vector<int> graphlist[], int vertice, int edge)
{
     graphlist[vertice].push_back(edge);
     graphlist[edge].push_back(vertice);
}
void solution()
{
     int edgesno;
     int verticno;
     cin >> edgesno;
     cin >> verticno;
     vector<int> graphlist[N];
     for (int i = 0; i < verticno; i++)
     {
          int e;
          int v;
          cin >> e >> v;
          Edge(graphlist, v, e);
     }
     for (int i = 0; i < edgesno; i++)
     {
          cout << "\n Adjacency list of vertex " << i
               << "\n head ";
          for (auto x : graphlist[i])
               cout << "-> " << x;
          cout<<endl;
     }
}
int main()
{
     solution();
}