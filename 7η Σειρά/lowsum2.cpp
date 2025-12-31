// This is the optimized version of the program.
 
#include <iostream>
using namespace std;

int a[1000001];

int main() {
    int N, best = 2000000001;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
        scanf("%d", &a[i]);
    
    int i = 0, j = N - 1;
    while (i < j) {
        int sum = a[i] + a[j];
        if (abs(sum) < abs(best)) best = sum;
        if (sum == 0) break;
        if (sum < 0) i++;
        else j--;
    }

    printf("%d\n", best);
    
    return 0;
}