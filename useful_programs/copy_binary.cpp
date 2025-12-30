#include <cstdio>

int main (int argc, char * argv[]) {
    FILE *fin, *fout;
    fin = fopen(argv[1], "rb");
    if (fin == nullptr) return 1;
    fout = fopen(argv[2], "wb");
    if (fout == nullptr) return 2;
    while (!feof(fin)) {
        unsigned char buffer[1000];
        unsigned int count;
        count = fread(buffer, 1, 1000, fin);
        fwrite(buffer, 1, count, fout);
    }
    fclose(fin);
    fclose(fout);
}
