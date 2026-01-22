#include <cstdio>

int main(int argc, char *argv[]) {
    FILE *f;
    if ((f = fopen(argv[1], "rt")) == nullptr) return 1;
    
    int c;
    char word[100];
    char first[100];
    char last[100];

    int wlen = 0;
    int wordCount = 0;
    int result = 0;

    bool inWord = false;

    while ((c = fgetc(f)) != EOF) {

        if (c != ' ' && c != '\n') {
            word[wlen++] = c;
            inWord = true;
        } else {
            if (inWord) {
                word[wlen] = '\0';

                if (wordCount == 0)
                    for (int i = 0; i <= wlen; ++i)
                        first[i] = word[i];
                
                for (int i = 0; i <= wlen; ++i)
                    last[i] = word[i];

                wordCount++;
                wlen = 0;
                inWord = false;
            }

            if (c == '\n') {
                if (wordCount >= 2) {
                    int i = 0;
                    bool same = true;
                    while (first[i] != '\0' || last[i] != '\0') {
                        if (first[i] != last[i]) {
                            same = false;
                            break;
                        }
                        i++;
                    }
                    if (same)
                        result++;
                }
                wordCount = 0;
            }   
        }
    }

    fclose(f);
    printf("%d\n", result);
    return 0;
}