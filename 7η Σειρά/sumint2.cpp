// This program has a time complexity of O(2N).

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
    int sum = 0, j = 0;
    for (int i = 0; i < N; ++i) {
        while (j < N && sum + x[j] <= K)
            sum += x[j++]; // same with sum += x[j]; j++;

        count += j - i;
        sum -= x[i];
    }
    
    printf("%lld\n", count);
    
    return 0;
}