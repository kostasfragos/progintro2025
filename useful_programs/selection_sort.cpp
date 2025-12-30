#include <iostream>
using namespace std;

void swap (int &x, int &y) {
    int save;
    save = x; x = y; y = save;
}

int main() {
    const int n = 10;
    int a[n] = {2, 4, 1, 5, 6, 3, 7, 8, 10, 9};

    // Με την επιλογή κάθε φορά του ελαχίστου:
    for (int i = 0; i < n-1; i++) { 
        int minpos = i;
        for (int j = i+1; j < n; j++)
             if (a[j] < a[minpos]) minpos = j;
        swap(a[i], a[minpos]);
    }

    // ή με την επιλογή κάθε φορά του μεγίστου:
    for (int i = n-1; i >= 0; i--) { 
        int maxpos = i;
        for (int j = i-1; j >= 0; j--)
             if (a[j] > a[maxpos]) maxpos = j;
        swap(a[i], a[maxpos]);
    }

    /* Για φθίνουσα σειρά απλά αλλάζεις τη φορά σύγκρισης: 
    από '<' σε '>' ή '>' σε '<', ανάλογα αν κάνεις επιλογή 
    ελαχίστου ή μεγίστου αντίστοιχα. */ 
    
    cout << "| ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " | ";

    return 0; 
}
