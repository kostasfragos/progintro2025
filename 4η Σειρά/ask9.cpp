#include "pzhelp"

PROGRAM {
  int N = READ_INT();
  int M = READ_INT();
  double MO;

  if (N > 100 || M > 100) {
    WRITELN("error");
  }
  double sum =0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      double tmp = READ_REAL();
      sum += tmp;
    }
  }

  MO = sum / (N*M);

  WRITELN(FORM(MO, 0, 3)); WRITELN(FORM(MO, 0, 3));
}
