#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int res = ((A * B) / 10) % 100;

    if (((A * B) / 100) % 10 == 0) cout << 0 << res << endl;
    else cout << res << endl;
}