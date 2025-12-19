#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a == 0 && b != 0) cout << "impossible" << endl;    
    else if (a == 0 && b == 0) cout << "trivial" << endl;
    else if (b == 0 && a != 0) printf("%.6lf\n", 0);    // Here I check whether x = 0. 
                                                        // If so, instead of printing -0.000000,
                                                        // I print 0.000000.
    else {
        double x = -b/a;
        printf("%.6lf\n", x);
    }

    return 0;
}