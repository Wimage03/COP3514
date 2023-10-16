#include <stdio.h>

void f() {
  int *q;
  *q = 3;
  printf("%d", *q);
}

int main(void) {
  int *p, i = 2;
  p = &i;
  // int *q, *r;
  printf("%d\n", *p);
  f();
  return 0;
}

