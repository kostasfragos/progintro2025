// Θέμα 2ο

#include <iostream>
#include "pzhelp"

// (α)
int f(int x, int c) {
    x /= 2;
    if (x < 1) return 1;
    c = 2 * c;
    return c + f(x, c);
}

// (δ)
int p(int m, int k) {
    int count = 0;
    for (int i = 1; i <= 1000; ++i) {
        if (i % m == 0) continue; else if (i % k == 0) break;
        ++count;
    }
    return count;
}

// (ε)
void solve(int rings, int source, int target, int auxil) {
    if (rings == 0) return;
    solve(rings-1, source, auxil, target);
    WRITELN("from", source, "to", target);
    solve(rings-1, auxil, target, source);
}

int main() {
    printf("%d\n", f(5, 7));
    printf("%d\n", p(11, 27));
    solve(4, 1, 2, 3);

    // (στ)
    int a[] = {32, 26, 50, 1, 8, 9, 42, 15, 17, 20};
    int *p = &a[4], *q = &a[6];
    p = q--;
    WRITELN(*p, *q, a[3]);
}
