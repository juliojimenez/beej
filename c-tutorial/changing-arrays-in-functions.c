#include <stdio.h>

void double_array(int *a, int len) {
  for (int i = 0; i < len; i++) {
    a[i] *= 2;
  }
}

int main(void) {
  int a[5] = {1, 2, 3, 4, 5};

  printf("Before: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  double_array(a, 5);

  printf("After: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
