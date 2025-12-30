#include <iostream>
// #include <algorithm>
using namespace std;

void moveZeroes(int a[10]) {
    int i = 0;
    for (int j = 0; j < 10; ++j) {
        if (a[j] != 0) {
            int temp = a[i]; // or just swap(a[i], a[j]);
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }
}

int main() {
    int A[10];
    for (int i = 0; i < 10; ++i) 
        scanf("%d", &A[i]);
    
    moveZeroes(A);

    for (int i = 0; i < 10; ++i) 
        printf("%d ", A[i]);

    return 0;
}