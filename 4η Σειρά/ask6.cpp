#include "pzhelp"

PROGRAM {
  int N = READ_INT();
  const int MAX_DIGITS = 8;

  long long power[10];
  for (int i = 0; i <= 9; i++) {
    // long long p = 1;
    // for (int k = 1; k <= N; k++) p *= i; //p = p * i;
    // power[i] = p;
    power[i] = pow(i, N);
  }

  //int limit = MAX_DIGITS * power[9];
  int limit;
  if (MAX_DIGITS * power[9] < 1e8-1) {
    limit = MAX_DIGITS * power[9];
  }
  else limit = 1e8 - 1;

  for (int n = 0; n <= limit; n++) {
    int number = n;
    int sum = 0;

    while (number > 0) {
      int d = number % 10; //pairnei to teleutaio psifio
      sum += power[d];
      number /= 10;        //afairei to teleutaio psifio
      if (sum > n) break;  //Mikrh beltisopoihsh
    }

    if (sum == n) WRITELN(n);
  }
}
