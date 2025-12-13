#include <iostream>
using namespace std;

int main()
{
  char crypto[26];
  int check[26];

  for (int i = 0; i < 26; i++)
    check[i] = 0;

  for (int i = 0; i < 26; i++)
  {
    crypto[i] = getchar();
    check[crypto[i] - 'a'] = 1;
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
    char c;
    while ((c = getchar()) != EOF)
    {
      if (c >= 'a' && c <= 'z')
        c = crypto[c - 'a']; // "hashing"
      if (c >= 'A' && c <= 'Z')
        c = crypto[c - 'A'] - 32;
      cout << c;
    }
  }
}
