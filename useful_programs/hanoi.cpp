#include <iostream>

void solve(int rings, int source, int target, int auxil) {
    if (rings == 0) return;
    solve(rings-1, source, auxil, target);
    printf("Move from %d to %d\n", source, target);
    solve(rings-1, auxil, target, source);
}

int main() {
    printf("Input Number of Rings: ");
    int rings;
    scanf("%d", &rings);
    solve(rings, 1, 3, 2);
}