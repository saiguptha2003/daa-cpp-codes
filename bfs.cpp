#include <iostream>
#include <queue>
using namespace std;
int main()
{
     queue<int> bfs;
     int graph[7][7] = {{0, 1, 1, 0, 0, 0, 0},
                        {1, 0, 1, 0, 0, 0, 0},
                        {1, 1, 0, 1, 1, 0, 0},
                        {1, 0, 1, 0, 1, 0, 0},
                        {0, 0, 1, 1, 0, 1, 1},
                        {0, 0, 0, 0, 1, 0, 0},
                        {0, 0, 0, 0, 1, 0, 0}};
     int n;
     cout << "enter the number of vertices:";
     cin >> n;
     int source;
     //create ia adfasdfadsfadsffjskfadsj iadfuiasfdjhk
     cout << "enter the source :";
     cin >> source;
     cout << source << " ";
     bfs.push(source);
     bool visited[11] = {0};
     visited[source] = true;
     while (!bfs.empty())
     {
          int val = bfs.front();
          bfs.pop();
          for (int i = 0; i < n; i++)
          {
               if (visited[i] == false && graph[val][i] == 1)
               {
                    cout << i << " ";
                    visited[i] = true;
                    bfs.push(i);
               }
          }
     }
}
