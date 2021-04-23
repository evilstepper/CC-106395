#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

struct Code {
    char *val;
    int children_size;
    int line;
    struct Code **children;
};

struct Code* new_code(char *s, int children_size, ...);

void Print(struct Code *r, int level);

int check(struct Code *r);
