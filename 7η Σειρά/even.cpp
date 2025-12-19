#include <iostream>
using namespace std;

int main() {
    int M; cin >> M;
    int N; cin >> N;

    if (M % 2 == 0 && N % 2 == 0) cout << 2 << endl;
    else if (M % 2 == 0 || N % 2 == 0) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}