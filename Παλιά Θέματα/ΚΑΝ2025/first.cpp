#include "pzhelp"

int a = 6, b = 8, c = 12;

void p(int a, int &c) {
    int b = c + a++;
    WRITELN(a, b, c);
    if (a > c) { p(a, b); WRITELN(a, b, c); } 
    else { a *= 2; WRITELN(a, b, c); }
}

PROGRAM { p(b, a); WRITELN(a, b, c); }