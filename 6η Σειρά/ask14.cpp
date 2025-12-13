#include <iostream>
using namespace std;

int partition(int a[], int first, int last)
{
    int x = a[(first + last) / 2];
    int i = first, j = last;

    while (true)
    {
        while (a[i] < x)
            i++;
        while (x < a[j])
            j--;
        if (i >= j)
            break;
        swap(a[i], a[j]);
        i++;
        j--;
    }
    return j;
}

void quicksort(int a[], int first, int last)
{
    int i;
    if (first >= last)
        return;
    i = partition(a, first, last);
    quicksort(a, first, i);
    quicksort(a, i + 1, last);
}

void smallest(int a, int b, int &smallest)
{ // briskei ton mikrotero apo 2 akeraious arithmous
    if (a < b)
        smallest = a;
    else
        smallest = b;
}

void greatest(int a, int b, int &greatest)
{ // briskei ton megalutero apo 2 akeraious arithmous
    if (a > b)
        greatest = a;
    else
        greatest = b;
}

int main()
{
    int N;
    cin >> N;
    int A[N], B[N];
    if (N > 50000)
        cout << "error" << endl;

    else
    {
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        quicksort(A, 0, N - 1);
        quicksort(B, 0, N - 1);

        bool same = true;
        for (int i = 0; i < N; i++)
            if (A[i] != B[i])
                same = false;

        if (same)
            cout << "yes" << endl;

        else
        {
            int minA, minB;
            for (int i = 0; i < N; i++)
                if (A[i] != B[i])
                {
                    minA = A[i]; // elaxista diaforetika stoixeia
                    maxB = B[i];
                    break;
                }

            int min, max;
            smallest(minA, minB, min);
            greatest(maxA, maxB, max);

            cout << "no" << ' ' << min << ' ' << max << endl;
        }
    }
    return 0;
}
