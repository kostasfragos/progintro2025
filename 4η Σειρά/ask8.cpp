#include "pzhelp"

PROGRAM {
  int N = READ_INT();
  int M = READ_INT();
  int colMax[M];
  int rowMin[N];

  if (N > 100 || M > 100) {
    WRITELN("error");
  }

  int a[N][M];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      a[i][j] = READ_INT();
    }
  }

  for (int j = 0; j < M; j++) {
    colMax[j] = a[0][j];
    for (int i = 0; i < N; i++) {
      if (a[i][j] > colMax[j])
        colMax[j] = a[i][j];
    }
  }

  int minOfColMax = colMax[0];
  for (int j = 0; j < M; j++) {
    if (colMax[j] < minOfColMax)
      minOfColMax = colMax[j];
  }

  for (int i = 0; i < N; i++) {
    rowMin[i] = a[i][0];
    for (int j = 0; j < M; j++) {
      if (a[i][j] < rowMin[i])
        rowMin[i] = a[i][j];
    }
  }

  int maxOfRowMin = rowMin[0];
  for (int i = 0; i < N; i++){
    if (rowMin[i] > maxOfRowMin)
      maxOfRowMin = rowMin[i];
  }

  WRITELN(minOfColMax); WRITELN(maxOfRowMin);
}

