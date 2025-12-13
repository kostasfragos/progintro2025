#include <iostream>
using namespace std;

int main()
{
    char meta[26];     // meta = metathesh
    char antimeta[26]; // antimeta = antistrofh metathesh
    int check[26];
    char option; // encrypt or decrypt

    for (int i = 0; i < 26; i++)
        check[i] = 0;

    for (int i = 0; i < 26; i++)
    {
        meta[i] = getchar();
        check[meta[i] - 'a'] = 1;
    }
    getchar();

    bool didntfind = false;
    for (int i = 0; i < 26; i++)
    {
        if (check[i] == 0)
        {
            didntfind = true;
            break;
        }
    }

    if (didntfind)
        cout << "error\n";

    else
    {
        bool flag = true;
        option = getchar();
        flag = (option == 'd');
        while ((option = getchar()) != '\n')
            ;

        if (flag)
        {
            int x;
            for (int i = 0; i < 26; i++)
            {
                x = meta[i] - 'a'; // "hashing"
                antimeta[x] = 'a' + i;
            }

            char dc; // dc = decrypt character
            while ((dc = getchar()) != EOF)
            {
                if (dc >= 'a' && dc <= 'z')
                    dc = antimeta[dc - 'a'];
                if (dc >= 'A' && dc <= 'Z')
                    dc = 'A' + antimeta[dc - 'A'] - 'a';
                cout << dc;
            }
        }

        else
        {

            char ec; // ec = encrypt character
            while ((ec = getchar()) != EOF)
            {
                if (ec >= 'a' && ec <= 'z')
                    ec = meta[ec - 'a']; // "hashing"
                if (ec >= 'A' && ec <= 'Z')
                    ec = meta[ec - 'A'] - 32;
                cout << ec;
            }
        }
    }
}
