/*
name:V D Panduranga Sai Guptha
topic: shortest path regarding to dog problem
*/
#include <iostream>
using namespace std;
#define N 10
bool s[N][N]={0};
bool safe(bool arr[N][N], int x, int y, int n)
{
     if (x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == 1)
          return true;
     return false;
}
bool solution(bool g[N][N], int x, int y, bool s[N][N], int n)
{
     if (x == n - 1 && y == n - 1 && g[x][y] == 1)
     {
          s[x][y] = 1;
          return true;
     }
     if (safe(g, x, y, n) == 1)
     {
          if (s[x][y] == 1)
          {
               return false;
          }
          s[x][y] = 1;
          if (solution(g, x + 1, y, s, n))
          {
               return true;
          }
          if (solution(g, x, y + 1, s, n))
          {
               return true;
          }
          s[x][y] = 0;
          return false;
     }
     return false;
}
int main()
{
     int n;
     cin >> n;
     bool path[N][N]={0};
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cin >> path[i][j];
          }
     }
     if(solution(path,0,0,s,n))
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cout<<s[i][j]<<" ";
          }
          cout<<endl;
     }
     else
     cout<<"Solution doesn't exist"<<endl;
     
}