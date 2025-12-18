#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if ((N * N % 100) == 24)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}