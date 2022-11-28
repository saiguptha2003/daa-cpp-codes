#include <iostream>
using namespace std;
long long solution(int n, int m)
{
    int xis[]{ -2, -1, 1, 2 };
    int yis[]{ 1, 2, 2, 1 };
 
    long long rounds = 0;
 
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < 4; ++k) {
                int x = i + xis[k], y = j + yis[k];
 
                if (x >= 0 && x < m && y >= 0 && y < n)
                    ++rounds;
            }
        }
    }
 
    long long moves = m * n;
    moves = moves * (moves - 1) / 2;
    long long ans=2 * (moves - rounds);
    return ans ;
}
int main()
{
     int n;
     cin>>n;
     int h;
     cin>>h;
     int g=solution(n,h);
    cout <<g<< endl;
    return 0;
}