#include "pzhelp"

void hello () {
  WRITELN("hello world");
}

PROGRAM {
  int n = READ_INT();
  if(n>0) for (int i = 0; i < n ; i++) hello();
  else WRITELN("nothing today");
}
