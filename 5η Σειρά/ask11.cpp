#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[150][150];
  long long expectedSum = n * n * (n * n - 1) / 2; // Athroisma 0+1+2+...+N^2-1
  long totalSum = 0;

  if (n > 150)
    cout << "error";
  else
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
        if (a[i][j] < 0 || a[i][j] >= n * n)
        {
          cout << "no" << endl;
          return 0;
        }
        totalSum += a[i][j];
      }
    }

    // Elegxos an uparxoun ola ta stoixeia
    if (totalSum != expectedSum)
    {
      cout << "no" << endl;
      return 0;
    }

    int magicSum = 0;
    for (int j = 0; j < n; j++)
      magicSum += a[0][j]; // Athroisma proths grammhs

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; i++)
    {
      diag1 += a[i][i];
      diag2 += a[i][n - 1 - i];
      int rowSum = 0, colSum = 0;
      for (int j = 0; j < n; j++)
      {
        rowSum += a[i][j]; // Athroisma grammwn
        colSum += a[j][i]; // Athroisma sthlwn
      }

      if (rowSum != magicSum || colSum != magicSum)
      {
        cout << "no" << endl;
        return 0;
      }
    }

    if (diag1 != magicSum || diag2 != magicSum)
      cout << "no" << endl;
    else
      cout << "yes" << endl;

    return 0;
  }
}
