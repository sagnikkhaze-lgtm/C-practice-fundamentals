#include <stdio.h>
#include <stdlib.h>
int main() {
  // malloc() dynamically allocates specific amount of bytes in memory
  int num;
  printf("enter how many numbers u want to enter? ");
  scanf("%d", &num);
  char *grade = malloc(num * sizeof(char));

  if (grade == NULL) {
    return 1;
  }

  for (int i = 0; i < num; i++) {
    printf("enter grade %d: ", i + 1);
    scanf(" %c", &grade[i]);
  }

  printf("\nYour grades are:\n");
  for (int i = 0; i < num; i++) {
    printf("%c\n", grade[i]);
  }

  free(grade);
  grade = NULL;

  return 0;
}