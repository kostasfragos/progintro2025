#include <iostream>
using namespace std;

#define MAXN 1000000
int a[MAXN];

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    int i = 0, maxChildren = 0;

    for (int j = 0; j < N; ++j) {
        if (a[j] - a[i] > 2 * K) ++i;
        maxChildren = max(maxChildren, j - i + 1); 
    }

    printf("%d\n", maxChildren);

    return 0;
}