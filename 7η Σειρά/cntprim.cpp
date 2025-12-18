#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    bool prime[N];

    // Αρχικοποίηση: θεωρούμε όλους τους αριθμούς πρώτους
    for (int i = 0; i <= N; i++)
        prime[i] = true;

    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= N; j += i)
                prime[j] = false;
        }
    }

    int count = 0;
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
            count++;
    }

    cout << count << endl;
}