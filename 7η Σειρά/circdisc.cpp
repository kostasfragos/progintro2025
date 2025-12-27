#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    double distSquared = X * X + Y * Y;

    if (distSquared < 1.0) cout << "inside\n";
    else if (distSquared == 1.0) cout << "border\n";
    else cout << "outside\n";

    return 0;
}