#include <stdlib.h>
#include <stdio.h>

#ifndef ERROR
#define ERROR

#define ThrowError(error) (fprintf(stderr, #error))

#endif