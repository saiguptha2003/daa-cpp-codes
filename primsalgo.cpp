/*
author:V D PANDURANGASAI GUTHA
topic:PRIMS WITH CLASS made a STL;
*/

#include <iostream>
#include <stdbool.h>
using namespace std;
class prims
{
private:
#define m 30
     int n;
     int graph[m][m];
     int spanning[m][m];
     bool visitedmst[m];
     int mainclause[m];
     int cost=0;
   public:
     void input()
     {
          cout << "enter the number of vertices :" << endl;
          cin >> n;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    cout<<"enter graph["<<i<<"]["<<j<<"]=";
                    cin >> graph[i][j];
                    spanning[i][j]=0;
               }
          }
     }
     int minimumindex(int key[],bool visitedmst[])
     {
          int min=INT_MAX;
          int minimumIndex;
          for(int i=0;i<n;i++)
          {
               if(visitedmst[i]==false && key[i]<min)
               {
                    min=key[i];
                    minimumIndex=i;
               }
          }
          return minimumIndex;
     }
     void primsalgorithm()
     {

          int key[m];
          for(int i=0;i<n;i++)
          {
               visitedmst[i]=false;
               key[i]=INT_MAX;
          }
          key[0]=0;
          mainclause[0]=-1;
          for(int i=0;i<n-1;i++)
          {
               int min=minimumindex(key,visitedmst);
               visitedmst[min]=true;
               for(int j=0;j<n;j++)
               {
                    if(graph[min][j] && visitedmst[i]==false && graph[min][j]<key[j])
                    {
                         mainclause[j]=min;
                         key[j]=graph[min][j];
                    }
               }

          }
     }
     void printMst()
     {
          primsalgorithm();
          for(int i=0;i<n;i++)
          {
               spanning[i][mainclause[i]]=graph[i][mainclause[i]];
               spanning[mainclause[i]][i]=spanning[i][mainclause[i]];
               cost=cost+graph[i][mainclause[i]];
          }
          system("clear");
          cout<<"given graph adjacency matrix :"<<endl;
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    cout<<graph[i][j]<<" ";
               }
               cout<<endl;
          }
          cout<<"spanning matrix adjacency matrix :"<<endl;
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    cout<<spanning[i][j]<<" ";
               }
               cout<<endl;
          }
          cout<<"total cost of spanning tree :"<<cost<<endl;
     }

};
int main()
{
     prims a;
     a.input();
     a.printMst();
}
