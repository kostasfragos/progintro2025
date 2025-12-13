#include "pzhelp"

PROGRAM {
  double palindromikes = 0;
  int N = READ_INT();
  SKIP_LINE();
  for (int i = 0; i < N; i++) {
    char word[20];
    int size = 0;
    for (int j = 0; j < 20; j++) {
      char symbol = getchar();
      if (symbol == '\n') break;
      word[j] = symbol;
      size += 1;
    }
    if (size == 20) {
      char symbol = getchar();
      if (symbol != '\n') {
        WRITELN("error");
        SKIP_LINE();
        continue;
      }
    }

    if (size == 0) WRITELN("empty");
    else {
      int k = 0;
      while (k < size/2 && word[k] == word[size-k-1]) {
        k += 1;
      }
      if (k ==size/2) {
        WRITELN("yes");
        palindromikes +=1;
      }
      else WRITELN("no");
    }
  }
  double percentage = (palindromikes / N)*100;
  WRITELN(FORM(percentage, 0, 3));
}
