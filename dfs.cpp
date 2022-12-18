/*
name: v d pandurangasai
topic: dfs
*/
#include <iostream>

using namespace std;

void dfs(int source,int visited[],int graph[7][7])
{
     cout << source << " ";

     visited[source] = 1;
     for (int iterator = 0; iterator < 7; iterator++)
     {
          if (graph[source][iterator] == 1 && !visited[iterator])
          {
               dfs(iterator,visited,graph);
          }
     }
}
int main()
{
int graph[7][7] = {{0, 1, 1, 0, 0, 0, 0},
                   {1, 0, 1, 0, 0, 0, 0},
                   {1, 1, 0, 1, 1, 0, 0},
                   {1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};
int  visited[7] = {0, 0, 0, 0, 0, 0, 0};
int source;
cout<<"enter the source :";
cin>>source;
     dfs(source,visited,graph);
}