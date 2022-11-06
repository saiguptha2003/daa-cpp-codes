/*
name : V D Panduranga Sai Guptha 
topic: fractional knapsack for neocolab
*/
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
class things
{
public:
     int profit;
     int weight;
     void input(int weight, int profit)
     {
          this->profit = profit;
          this->weight = weight;
     }
};
bool greate(things sp, things yp)
{
     double result1 = (double)sp.profit / (double)sp.weight;
     double result2 = (double)yp.profit / (double)yp.weight;
     return result1 > result2;
}
double knapsack(things p[], int W, int n)
{
     double pi = 0;
     for (int i = 0; i < n; i++)
     {
          if (p[i].weight <= W)
          {
               W = W - p[i].weight;
               pi = pi + p[i].profit;
               cout<<i+1<<" "<<p[i].profit<<" "<<p[i].weight<<" "<<W<<"."<<endl;
          }
          else
          {
               double d = (double)(W) / (double)p[i].weight;
               W = W + p[i].weight * d;
               pi = pi + p[i].profit * d;
               cout<<floor((p[i].profit*d/p[i].profit)*100)<<"% "<<p[i].profit<<" "<<p[i].weight<<" "<<i+1<<endl;
               break;
          }
          
     }
     return pi;
}
int main()
{
     int W;
cout<<"Enter the capacity of knapsack:"<<endl;
     int n;
     cin >> W;
cout<<"Enter the number of items:"<<endl;
 cin >> n;
cout<<"Enter the weight and value of " <<n<<" item:"<<endl;
    

     things s[n];
     for (int i = 0; i < n; i++)
     {
          int pro;
          int wei;
          cin >> wei;
          cin >> pro;
          s[i].input(wei, pro);
     }
     sort(s, s + n, greate);
     double g=knapsack(s, W, n);
     cout <<"Filled the bag with objects worth " <<g<<".00 Rs.";
}