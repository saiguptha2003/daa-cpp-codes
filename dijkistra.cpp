/*
name :         V D Panduranga Sai Guptha  
topic: Dijkistra using classes */
#include<iostream>
#include<limits.h>
using namespace std;
#define m 90
#define V 9
class dijkistra
{
      /*int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };*/
     int graph[m][m];
     int n;
     int src;
     bool shortestvisited[m];
     int distance[m];
     public:
     void input()
     {
          cout<<"enter the number of vertices :";
          cin>>n;
          cout<<"enter the sourse :";
          cin>>src;
          cout<<"enter  the adjacency matrix :"<<endl;
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    cout<<"enter element graph["<<i<<"]["<<j<<"] :";
                    cin>>graph[i][j];
               }
               cout<<endl;
          }
     

     }
     int minimumIndex(int distance[],bool spt[])
     {
          int min=INT_MAX;
          int minindex;
          for(int i=0;i<n;i++)
          {
               if(distance[i]<=min && spt[i]==false)
               {
                    min=distance[i];
                    minindex=i;
               }
          }
          return minindex;
     }
     void dijkistraAlgo()
     {
          for(int i=0;i<n;i++)
          {
               distance[i]=INT_MAX;
               shortestvisited[i]=false;
          }
          distance[src]=0;
          for(int i=0;i<n-1;i++)
          {
               int minindex=minimumIndex(distance,shortestvisited);
               shortestvisited[minindex]=true;
               for(int j=0;j<n;j++)
               {
                    if(!shortestvisited[j] && graph[minindex][j] && distance[minindex]!=INT_MAX && graph[minindex][j]+distance[minindex]<distance[j] )
                    {
                         distance[j]=graph[minindex][j]+distance[minindex];
                    }
               }

          }

     }
     void printDijkista()
     {
          dijkistraAlgo();

          cout<<"given Matrix :"<<endl;
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    cout<<graph[i][j]<<"    ";
               }
               cout<<endl;
          }
          cout<<"solution :"<<endl;
          cout<<"vertices     distance"<<endl;
          for(int i=0;i<n;i++)
          {
               cout<<i<<"          "<<distance[i]<<endl;
          }
     }

};
int main(){
     dijkistra g;
     g.input();
     g.printDijkista();

}
