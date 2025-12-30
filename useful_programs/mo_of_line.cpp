#include <cstdio>

int main() {
    int lines = 0, chars = 0, c;
    while ((c = getchar()) != EOF) {
        if (c == '\n') lines++; else chars++;
    }

    printf("%d lines were read\n", lines);  

    if (lines > 0) printf("%0.3lf characters per line\n", (double) chars / lines);
}