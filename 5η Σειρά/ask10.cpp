#include <iostream>
using namespace std;

int main()
{
    string answer;
    do
    {
        int n;
        cin >> n;
        int a[n][n];
        int i = n / 2, j = n, k = 0;

        if (n % 2 == 0 || n < 3 || n > 19)
            cout << "error" << endl;
        else
        {

            for (int h = 0; h < n; h++)
            {
                j = j - 1;
                a[i][j] = k;
                k = k + 1;
                for (int m = 1; m < n; m++)
                {
                    j = (j + 1) % n;
                    i = (i + 1) % n;
                    a[i][j] = k;
                    k = k + 1;
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
        cout << "Do you want to continue? (yes / no): ";
        cin >> answer;
    } while (answer == "yes");
    return 0;
}
