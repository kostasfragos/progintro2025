#include <iostream>
using namespace std;

int main()
{
    char a[100][20];
    int b[100];
    int n = 0;
    int c, i = 0, j = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n')
        {
            a[i][j] = c;
            j++;
        }

        else if (c == '\n')
        {
            n++;      // or b[n] = j;
            b[i] = j; //    n++;
            for (int i = n - 1; i >= 0; --i)
            {
                for (int j = 0; j < b[i]; ++j)
                    cout << a[i][j];
                if (j > 0 && i != 0)
                    cout << ' ';
            }

            cout << endl;
            i = j = n = 0;
        }

        else
        {
            if (j > 0)
            {
                b[n] = j;
                n++;
                i++;
                j = 0;
            }
            continue;
        }
    }
}
