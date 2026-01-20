#include <cstdio>

void strcpy(char *t, char *s) { // this is the standard implementation
    while ((*t++ = *s++) != '\0');
}

void strcopy(char *t, char *s) { // this is MY implementation
    int i = 0, j = 0;
    while (s[i] != '\0') {
        t[i] = s[i];
        t[++i] = s[++j];
    }
}

int main() {
    char a[15] = "Hello world!", b[15];
    strcopy(b, a);
    printf("%s\n", b);
    for (int i = 0; i < 15; i++) // making sure the '\0' character is placed correctly
        if (b[i] == '\0') printf("Found it at %d place of b.", i+1);
}
