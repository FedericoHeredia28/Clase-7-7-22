#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  c = getchar();
  while ((c = getchar()) != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}
