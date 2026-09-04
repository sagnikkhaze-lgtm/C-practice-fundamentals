#include <stdio.h>

typedef enum { ROCK, PAPER, SCISSORS } pick;

int main(void) {
  pick choice = PAPER;

  printf("%d", choice);

  return 0;
}
