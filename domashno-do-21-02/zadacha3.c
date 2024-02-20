
#include <stdio.h>

int compareasc(const void *a, const void *b) {

  int *a1 = (int *)a;
  int *b1 = (int *)b;

  if (*a1 > *b1) {
    return 1;
  } else if (*a1 < *b1) {
    return -1;
  } else {
    return 0;
  }
}

int comparedesk(const void *a, const void *b) {

  int *a1 = (int *)a;
  int *b1 = (int *)b;

  if (*a1 < *b1) {
    return 1;
  } else if (*a1 > *b1) {
    return -1;
  } else {
    return 0;
  }
}

int main(void) {

  int a, b;
  printf("\n a=");
  scanf("%d", &a);
  printf("\n b=");
  scanf("%d", &b);

  int tom = compareasc(&a, &b);
  int pol = comparedesk(&a, &b);

  printf("\n compareasc func: %d", tom);
  printf("\n comparedesk func: %d", pol);

  return 0;
}
