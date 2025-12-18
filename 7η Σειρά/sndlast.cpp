#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N < 10 || N > 100000000)
        cout << "error" << endl;
    else
    {
        int second2lastDigit = (N / 10) % 10;
        cout << second2lastDigit << endl;
    }
    return 0;
}