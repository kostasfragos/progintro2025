#include "pzhelp"

void solve(int rings, int source, int target, int auxil) {
    if (rings == 0) return;
    solve(rings-1, source, auxil, target);
    WRITELN("Move from", source, "to", target);
    solve(rings-1, auxil, target, source);
}

PROGRAM {
    WRITE("Input Number of Rings: ");
    int rings = READ_INT();
    solve(rings, 1, 3, 2);
}