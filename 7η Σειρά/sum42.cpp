#include <iostream>
using namespace std;

int main() {
    int M; cin >> M;
    int N; cin >> N;

    int sum = M + N;
    if (sum % 100 == 42) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}