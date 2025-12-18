#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if ((N / 10) != 0 && (N / 100) != 0)
    {
        if ((N / 1000) == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    else
        cout << "no" << endl;
}