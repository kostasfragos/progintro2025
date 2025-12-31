// This solution uses Kandane's algorithm to solve the problem.

#include <iostream>
using namespace std;

int a[1000001];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    int currentSum = a[0], maxSum = a[0];
    
    // Traverse the array from the second element
    for (int i = 1; i < N; ++i) {
        // If currentSum is negative, reset to current element
        currentSum = max(a[i], currentSum + a[i]);
        // Update maxSum if currentSum is greater
        maxSum = max(maxSum, currentSum);
    }

    printf("%d\n", maxSum);

    return 0;              
}