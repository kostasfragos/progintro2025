#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    int b[N];
    int prefixSum[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < N; i++) {
        if (a[i] % 2 == 0) b[i] = 1;
        else b[i] = -1;
    }

    prefixSum[0] = b[0];
    for (int i = 1; i < N; i++) 
        prefixSum[i] = prefixSum[i-1] + b[i];

    int maxLen = 0;

    for (int i = 0; i < N; i++) {
        if (prefixSum[i] == 0)
            maxLen = i + 1;
    } 
        
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (prefixSum[j] - prefixSum[i] == 0) {
                int len = j - i;
                if (len > maxLen) maxLen = len;
            } 
        }
    }

    printf("%d\n", maxLen);
        
    return 0;
}
