#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int a[n] = {2, 4, 1, 5, 6, 3, 7, 8, 10, 9};

    for (int i = 1; i < n; i++) {
        int x = a[i], j = i;
        while (j > 0 && a[j-1] > x) {
            a[j] = a[j-1]; j = j-1;
        }
        a[j] = x;
    }

    cout << "| ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " | ";

    return 0;
}