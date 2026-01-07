// This program has a time complexity of O(N).

#include <iostream>

#define MAXN 4000000
int a[MAXN];

int main () {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    int maxRes = 0;
    int best = a[0] - 0;

    for (int i = 1; i < N; ++i) {
        int current = best + a[i] + i;
        if (current > maxRes)
            maxRes = current;

        int candidate = a[i] - i;
        if (candidate > best)
            best = candidate;
    }

    printf("%d\n", maxRes);

    return 0;
}