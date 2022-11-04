/*
name: V D Panduranga Sai Guptha 
topic: codeforces 899/c

*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     long long int n;
     cin >> n;
     long long int totalsum = n * (n + 1) / 2;
     long long int onesum = totalsum / 2;
     vector<long long int> b1, b2;
     long long int  count = 0;
     for (long long int i = n; i > 0; i--)
     {
          if (onesum - i >= 0)
          {
               b1.push_back(i);
               count++;
               onesum -= i;
          }
          else
          {
               b2.push_back(i);
          }
     }
     long long int  sum1 = 0, sum2 = 0;
     for (long long int  i = 0; i < b1.size(); i++)
     {
          sum1 = sum1 + b1[i];

     }
     for (long long int  i = 0; i < b2.size(); i++)
     {
          sum2 = sum2 + b2[i];
     }
     cout <<sum2-sum1 << endl;
     cout<<count<<" ";
     for (long long int  i = 0; i <b1.size(); i++)
     {
          cout << b1[i] << " ";
     }
     return 0;
}