#include "fMember.h"

int printMember(struct fMember * p) {
  printf("This is %s, they are %d years old\n", p->name, p->age);
  return 0;
}

struct fMember * heapMember(char *n, int a) {
  struct fMember *p = malloc(sizeof(struct fMember));
  p->name = n;
  p->age = a;
  // p is pointer || * makes the deref
  return p;
}
