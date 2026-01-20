#include <cstdio>

char tolower (char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch - 'A' + 'a';
    else return ch;
}

int main() {
    int c;
    while ((c = getchar()) != EOF)
        putchar(tolower(c));
}