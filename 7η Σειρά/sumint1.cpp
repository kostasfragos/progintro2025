// This program has a time complexity of O(N^2).

#include <iostream>
using namespace std;

#define MAXN 2000000
int x[MAXN];

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; ++i)
        scanf("%d", &x[i]);
        
    long long count = 0;
    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = i; j < N; ++j) {
            sum += x[j];

        if (sum <= K) ++count;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}