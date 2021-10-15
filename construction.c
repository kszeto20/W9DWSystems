#include <stdio.h>
#include "fMember.h"

int main() {
  printf("Good New Everyone!\n");

  srand(time(NULL));

  char  m[] = "Vicki";

  struct fMember *mom = heapMember(m, rand());

  printMember(mom);

  return 0;
}
