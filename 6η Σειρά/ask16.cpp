#include <iostream>
using namespace std;

int main() {
    const int limit = 80;
    int running = 0;
    int start_word = 0;
    for (int i = 0; i < n; i++) {
        running += b[i]; // 
        int words_used = i - start_word + 1; 
        int chars_needed = running + (words_used - 1);
        if(chars_needed > limit) {
            // dont take i-th word and fill the line
            running -= b[i];
            words_used--;
            int space = limit - running;
            int space_per_gap = space / (words_used-1);
            int remain = space % (words_used-1);
            for(int w=start_word; w < i; w++) {
                for(int ci=0; ci < b[w]; ci++) putchar(a[w][ci]);
                if(w != i-1) {
                    for(int ci=0; ci < space_per_gap; ci++) putchar(' ');
                    if(w<remain) putchar(' ');
                }
                putchar('\n');
            }
            start_word = i;
            running = b[i];
        }
    }
}
        
    
