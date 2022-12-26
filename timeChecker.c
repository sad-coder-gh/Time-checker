#include <stdio.h>

int main(void) {
  int hour;
  printf("Enter the hour (1-12): ");
  scanf("%d", &hour);

  if (hour >= 1 && hour < 12) {
    printf("Good morning!\n");
  } else if (hour >= 12 && hour < 17) {
    printf("Good afternoon!\n");
  } else if (hour >= 17 && hour < 21) {
    printf("Good evening!\n");
  } else {
    printf("Good night!\n");
  }

  return 0;
}

