#include <cstdio>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        FILE *f;
        int chars = 0,  lines = 0, c;
        if ((f = fopen(argv[i], "rt")) == nullptr) // "rt" για read text και "rb" για read binary
            return 1;
        while ((c = fgetc(f)) != EOF) {
            chars++;
            if (c == '\n') lines++;
        }
        fclose(f);
        printf("Found %d char(s), %d line(s) in file %s\n", chars, lines, argv[i]);
    }
}