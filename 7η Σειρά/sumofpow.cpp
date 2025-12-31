#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    
    static bool used[5000001] = {false};
    int count = 0;

    for (int a = 1; a <= N; a *= 2) {
        for (int b = 1; b <= N; b *= 3) {
            for (int c = 1; c <= N; c *= 5) {
                int sum = a + b + c;
                    if (sum <= N && !used[sum]) {
                    used[sum] = true;
                count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}