#include <iostream>
using namespace std;

void swap (int &x, int &y) {
    int save;
    save = x; x = y; y = save;
}

int main() {
    const int n = 10;
    int a[n] = {2, 4, 1, 5, 6, 3, 7, 8, 10, 9};

    for (int i = 0; i < n-1; i++)
        for (int j = n-2; j >= i; j--)
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);

    // ή με βιλτιστοποίηση γίνεται:
    for (int i = 0; i < n-1; i++) {
        bool swaps = false;
        for (int j = n-2; j >= i; j--)
            if (a[j] > a[j+1]) {
                swaps = true;
                swap(a[j], a[j+1]);
            }
        if (!swaps) break;
    }   
    // και έχει πολυπλοκότητα O(n) αντί για O(n^2)
    cout << "| ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " | ";

    return 0;
}