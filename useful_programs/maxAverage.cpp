#include<iostream>
using namespace std;

// In this program we use "static sliding window" algorithm technique to solve the following problem.
// "Given an integer array and an integer k, find maximum average of any contiguous subarray of size k."
double findMaxAverage(int k, int a[10]) {
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    int maxSum = sum;

    for (int i = k; i < 10; i++) {
        sum += a[i];
        sum -= a[i - k];
        maxSum = max(maxSum, sum);
    }

    return (double) maxSum / k;
}
int main() {
    int A[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &A[i]);

    printf("%.2lf", findMaxAverage(4, A));
    
    return 0;
}