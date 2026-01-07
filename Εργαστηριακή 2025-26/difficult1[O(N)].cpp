#include <iostream>

#define MAXN 500000
int a[MAXN], b[MAXN];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    for (int i = 0; i < N; ++i)
        scanf("%d", &b[i]);

    int S = 0, maxX = 0;
    
    for (int j = 0; j < N; ++j) {
        S += b[j];
        int X = S - (a[j] - a[0]);
        if (X > maxX) maxX = X;
    }

    printf("%d\n", maxX);

    return 0;
}