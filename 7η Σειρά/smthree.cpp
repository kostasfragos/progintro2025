#include <iostream>
using namespace std;

int main() {
    int a, b , c;
    cin >> a >> b >> c;

    int min = a;
    
    if (b < a) min = b;
    if (c < a) min = c;

    cout << min << endl;
    
    return 0;
}