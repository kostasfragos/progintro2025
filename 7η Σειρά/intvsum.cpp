#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    int prefixSum[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    prefixSum[0] = a[0];
    for (int i = 1; i < N; i++)
        prefixSum[i] = prefixSum[i-1] + a[i];
    
    
    int maxj = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 2 ; j < N; j++) {
            if (a[i] + a[j] == prefixSum[j-1] - prefixSum[i]) {
                if (j + 1 > maxj) maxj = j + 1;
            }
        }
    }

    printf("%d\n", maxj);

    return 0;
}