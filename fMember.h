#include <stdio.h>
#include <string.h>
#include <time.h>

struct fMember {char *name; int *age;};

int printMember(struct fMember * p);

struct fMember * heapMember(char *n, int a);
