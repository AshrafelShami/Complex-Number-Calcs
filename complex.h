#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct complex{
    double real; 
    double imaginary; 
};

typedef struct complex COMPLEX, * CPTR;

COMPLEX CreateComplex(double real, double imaginary);

void DestroyComplex(CPTR complex);

COMPLEX AddComplex(CPTR first, CPTR second);

COMPLEX SubtractComplex(CPTR first, CPTR second);

COMPLEX MultiplyComplex(CPTR first, CPTR second);

COMPLEX ConjugateComplex(CPTR complex);

COMPLEX DivideComplex(CPTR first, CPTR second);

void PrintComplex(CPTR complex);
