#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int a[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int positives = 0, swaps = 0;
    int first, last;    

    for (int i = 0; i < N; i++) {
        if (a[i] > 0) 
            positives++;
        
        else swaps += positives; 
    }
    
    for (int i = 0; i < N; i++) {
        if (a[i] < 0) {
            first = a[i];
            break;
        }
    }

    for (int i = N-1; i >= 0; i--) {
        if (a[i] > 0) {
            last = a[i];
            break;
        }
    }
    
    printf("%d\n", swaps);
    printf("%d\n", first);
    printf("%d\n", last);

    return 0;
}