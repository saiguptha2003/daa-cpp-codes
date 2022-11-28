#include <iostream>
using namespace std;
#define N 10
void printboard(bool arr[N][N], int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cout << arr[i][j] << " ";
          }
          cout << endl;
     }
}
bool isafepawn(bool arr[N][N], int row, int col, int n)
{
     for (int i = 0; i < col; i++)
     {
          if (arr[row][i])
               return false; 
     }
     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
     {
          if (arr[i][j])
               return false;
     }
     for (int i = row, j = col; i < n && j >= 0; i++, j--)
     {
          if (arr[i][j])
               return false;
     }
     return true;
}
bool solution(bool arr[N][N], int col, int n)
{
     if (col >= n)
     {
          return true;
     }
     for (int i = 0; i < n; i++)
     {
          if (isafepawn(arr, i, col, n))
          {
               arr[i][col] = 1;
               if (solution(arr, col + 1, n))
                    return true;
               arr[i][col] = 0;
          }
     }
     return false;
}
int main()
{
     int n = 4;
     bool chessboard[N][N] = {0};
     solution(chessboard, 0, n);
     printboard(chessboard, n);
}