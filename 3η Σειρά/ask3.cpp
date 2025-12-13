#include "pzhelp"

PROGRAM {

  int N = READ_INT();
  for (int i = 0; i < N; i++) {
    SKIP_LINE();
    char praksh = getchar();
    int n1, n2, d1, d2;
    n1 = READ_INT();
    d1 = READ_INT();
    n2 = READ_INT();
    d2 = READ_INT();

    int num, den;

    switch (praksh) {
      case '+': num = n1*d2 + n2*d1; den = d1*d2;
                break;
      case '-': num = n1*d2 - n2*d1; den = d1*d2;
                break;
      case '*': num = n1*n2; den = d1*d2;
                break;
      case '/': num = n1*d2; den = d1*n2;
                break;
    }

    int A = num;
    int B = den;

    while (A > 0 && B > 0)
      if (A > B) A = A % B;
      else B = B % A;

    int gcd = A + B;
    num = num / gcd;
    den = den / gcd;

    WRITELN(num, den);

  }

}
