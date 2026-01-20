#include <cstdio>

char tocapital (char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 'a' + 'A';
    else return ch;
}

int main() {
    int c;
    while ((c = getchar()) != EOF)
        putchar(tocapital(c));
}