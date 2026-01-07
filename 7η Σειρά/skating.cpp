#include <iostream>
using namespace std;

#define MAXN 1000000
int a[MAXN];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    int velocity = 0, maxVelocity = 0;

    for (int i = N - 1; i >= 0; --i) {
        velocity += a[i];
        if (velocity > maxVelocity)
            maxVelocity = velocity;
    }

    printf("%d\n", maxVelocity);

    return 0;
}