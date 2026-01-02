// This program has a time complexity of O(N^2).

#include <iostream>
using namespace std;

#define MAXN 1000000
int x[MAXN];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; ++i)
        scanf("%d", &x[i]);

    int maxSum = 0;
    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = i; j < N; ++j) {
            sum += x[j];

        if (sum % M == 0) maxSum = max(maxSum, sum);
        }
    }

    printf("%d\n", maxSum);

    return 0;
}