#include "pzhelp"

PROGRAM {
  const int A = 1000;
  const int B = 9999;

  // Pinakas pou apothikevei gia kathe psifio 0-9 tin tetarti dynami tou
  int fourthPower[10];
  for (int i = 0; i <= 9; i++) {
    fourthPower[i] = i*i*i*i;
  }

  for (int n = A; n <= B; n++) {
    int number = n;
    int sum = 0;


  while (number > 0) {
    int d = number % 10;    //pairnei mono to teleutaio psifio tou arithmou
    sum += fourthPower[d];  //athrizei tis tetartes dinameis twn psifiwn tou arithmou
    number /= 10;           //afairei to teleutaio psifio tou arithmou
  }

  if (sum == n) WRITELN(n);

  }
}
