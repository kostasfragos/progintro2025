#include <iostream>
using namespace std;

#define MAXN 10000000
int a[MAXN];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    int i = 0, j = N - 1;
    int S = 0, sumX = 0, sumY = 0; // Σ = S

    while (i <= j) {
        if (sumX <= sumY) sumX += a[i++];
        else sumY += a[j--];

        if (sumX == sumY) S = sumX;
    }
        
    printf("%d\n", S);

    return 0;
}