#include <iostream>
using namespace std;

int fact(int x)
{
    int p = 1;
    for (int i = 2; i <= x; i++)
        p = p * i;
    return p;
}

int main()
{
    int N;
    cin >> N;
    int i;
    if (N == 1)
        cout << 1 << endl;
    else
    {
        for (i = 1; i <= N; i++)
            if (fact(i) > N)
                break;
        cout << i - 1 << endl;
    }
}