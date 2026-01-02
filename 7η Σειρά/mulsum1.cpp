// This program has a time complexity of O(N^3).

#include <iostream>
using namespace std;

#define MAXN 1000000
int x[MAXN];

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
        cin >> x[i];

    int maxSum = 0;
    for (int i = 0; i < N; ++i)
        for (int j = i; j < N; ++j) {
            int sum = 0;
            for (int k = i; k <= j; ++k) 
                sum += x[k];

            if (sum % M == 0) maxSum = max(maxSum, sum);
        }
    

    cout << maxSum << endl;

    return 0;
}