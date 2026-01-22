// Θέμα 2ο

#include "pzhelp"

int k = 4;

// (γ)
PROC proc1(int &n) {
    n = (n-1) * (n+1);
    WRITELN(n+k/2);
}

PROC proc2(int n) {
    n = (n-1) * (n+1);
    WRITELN(n+k/2);
}

// (ε)
FUNC int fun(int n, int x) {
    if (n <= 1) return x;
    int t = fun(n/2, x);
    if (n % 2 == 0) return t*t;
    else return t*t*x;
}

// (ζ)
PROC fun(int n) {
    if (n == 0)     { WRITE("2"); return; }
    if (n % 2 == 0) { WRITE("0"); fun(n-1); WRITE("1"); }
    else            { WRITE("1"); fun(n-1); WRITE("0"); }
}

PROGRAM {
    // (γ)
    proc1(k);
    k = 4;    // <-- αυτό χρειάζεται γιατί η τιμή του k
    proc2(k); // αλλάζει μετά την κλήση της proc1(), διότι
              // γράφω και τα δύο προγράμματα σε ένα αρχείο

    // (ε)
    WRITELN(fun(9, 2));

    // (ζ)
    fun(5);

    // (η)
    WRITELN();
    int *p = new int, *q = new int, *t = new int;
    *p=17; *q=2**p;
    *t=--*q/2; // ίδιο με: *q -= 1;
               //          *t = *q/2;
    p=t; *p=*p+*q;
    *t=*p**q/2;
    WRITELN(*q+*p);
}