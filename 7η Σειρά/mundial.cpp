#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;

    if (N == 1942 || N == 1946) cout << "no\n";
    else if (N >= 1930 && (N - 1930) % 4 == 0) cout << "yes\n";
    else cout << "no\n";

    return 0;
}
