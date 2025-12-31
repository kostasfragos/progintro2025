// This is the "brute force" approach.

#include <iostream>
using namespace std;

int a[1000001];

int main() {
    int N, maxSum = a[0];
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    for (int i = 0; i < N; ++i) {
        int currentSum = 0;
        for (int j = i; j < N; ++j) {
            currentSum += a[j];
            if (currentSum > maxSum) maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);
          
    return 0;
}