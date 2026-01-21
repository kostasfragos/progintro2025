#include <cstdio>

char tocapital (char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 'a' + 'A';
        // return ch - 32;
    else return ch;
}

int main() {
    int c;
    while ((c = getchar()) != EOF)
        putchar(tocapital(c));
}