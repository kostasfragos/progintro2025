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

    if (d1*d2 == 0 || (praksh == '/' && n2 == 0)) {
      WRITELN("error");
      continue;
    }

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

    int A = abs(num);
    int B = abs(den);

    while (A > 0 && B > 0) {
      if (A > B) A = A % B;
      else B = B % A;
    }

    int gcd = A + B;
    num = num / gcd;
    den = den / gcd;


    if (den < 0) {
      den = -den;
      num = -num;
    }

    int r1 = abs(num) / den;
    int r2 = abs(num) - r1 * den;

    if (num < 0) {
      if (r1 == 0 && r2 != 0){
        WRITELN("-0", r2, den);
      }
      else {
        r1 = r1*(-1);
        WRITELN(r1, r2, den);
      }
    }
    
    else {
        WRITELN(r1, r2, den);
    }
  }
}

