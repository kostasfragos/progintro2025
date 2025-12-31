// This is the "brute force" solution of the problem.

#include <iostream>
using namespace std;

int a[1000001];

int main() {
    int N, best = 2000000001;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
        scanf("%d", &a[i]);
    
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(best)) best = sum;
        }
    }

    printf("%d\n", best);

    return 0;
}