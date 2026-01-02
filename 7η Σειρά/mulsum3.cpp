// This program has a time complexity of O(N+M).

#include <iostream>
using namespace std;

#define MAXN 1000000
#define MAXM 1000000
int x[MAXN];
int r[MAXM];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; ++i)
        scanf("%d", &x[i]);

    r[0] = 0;
    for (int i = 1; i < M; ++i) r[i] = -1; // not found

    int maxSum = 0, sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += x[i];
        int k  = sum % M;
        if (r[k] != -1) maxSum = max(maxSum, sum - r[k]); 
        else r[k] = sum;
    } 

    printf("%d\n", maxSum);

    return 0;
}