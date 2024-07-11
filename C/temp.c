#include <stdbool.h>

static inline bool is_even(int num) {
  return (num & 1) == 0;
}

int main() {
  int number;

  printf("Enter an integer: ");
  scanf("%d", &number);

  if (is_even(number)) {
    printf("%d is even\n", number);
  } else {
    printf("%d is odd\n", number);
  }

  return 0;
}
