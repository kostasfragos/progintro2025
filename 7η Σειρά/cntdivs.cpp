#include <iostream>
using namespace std;

// Here we construct Euler's Phi (φ) funtion
int phi(int n) {
    int result = n;

    for (int p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    if (n > 1)
        result -= result / n;

    return result;
}

int main() {
    int N;
    cin >> N;

    int answer = N - phi(N);
    cout << answer << endl;

    return 0;
}
