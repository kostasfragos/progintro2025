#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if ((N % 7) == 0 && (N % 6) != 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}