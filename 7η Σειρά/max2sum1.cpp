// This program has a time complexity of O(N^2).

#include <iostream>

#define MAXN 4000000
int a[MAXN];

int main () {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    int maxRes = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int res = a[i] + a[j] + j - i;
            if (res > maxRes) maxRes = res;
        }
    }

    printf("%d\n", maxRes);

    return 0;
}