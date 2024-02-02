#include <stdio.h>

int main(void) {
  char s[] = "hello";
  char *p = s;

  for (int i = 0; i < 5; i++) {
    printf("%c", s[i]);
    printf("%c", p[i]);
  }
}
