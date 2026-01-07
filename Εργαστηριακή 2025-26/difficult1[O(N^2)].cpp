#include <iostream>

#define MAXN 500000
int a[MAXN], b[MAXN];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i < N; ++i)
        scanf("%d", &a[i]);

    for (int i = 1; i < N; ++i)
        scanf("%d", &b[i]);

    int maxX = 0;
    for (int i = 0; i < N; ++i) {
        int S = 0;
        for (int j = i; j < N; ++j) {
            S += b[j];
            int X = S - (a[j] - a[i]);
            if (X > maxX) maxX = X;
        }
    }

    printf("%d\n", maxX);

    return 0;
}