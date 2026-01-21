#include "pzhelp"

int a = 2, b = 17, c = 1;

PROC p(int a, int &c) {
    int b = a * c++;
    WRITELN(a, b, c);
    if (4*a > c) { p(b/2, a); WRITELN(a, b, c); }
}

PROGRAM { p(c, a); WRITELN(a, b, c); }