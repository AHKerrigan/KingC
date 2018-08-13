/* Declare structure that tracks xomplex numbers
 * Write a functoin named make_complex that stores its two arguments
 * in a complex structure
 *
 * Write a function named add_complex that adds the corresponding 
 * members of its arguments and returns the results */

#include <stdio.h>

typedef struct{
        double real;
        double imaginary;
    } complex;

complex make_complex(double real, double imaginary){
    complex returnComplex;

    returnComplex.real = real;
    returnComplex.imaginary = imaginary;
    
    return returnComplex;
}

complex add_complex(complex c1, complex c2){
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}
int main(void){
    

    complex c1 = {0.0, 1.0};
    complex c2 = {1.0, 0.0};
    
    printf("Real: %lf\nImaginary: %lf\n", add_complex(c1, c2).real,
    add_complex(c1, c2).imaginary);
    return 0;
}