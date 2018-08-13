/* Assume that the fraction structure contains two members: numerator
 * and denominator (both of type int). Write functions that perform the
 * following operations on fractions
 *
 * a) Reduce the frcation to lowest terms
 * b) add the fractions f1 and f2
 * c) Subtrac the fractions
 * d) Multiply the fractions
 * e) Divide the fraction f1 by fraction f2
 */

#include <stdio.h>

int gcd(int a, int b){
    
    if(a == 0){
        return b;
    }
    return gcd(b % a, a);
}

typedef struct {
    int numerator;
    int denominator;
} fraction;

fraction reduction(fraction f1){
    int divis = gcd(f1.numerator, f1.denominator);
    fraction r = {f1.numerator / divis, f1.denominator / divis};
    return r;
}

fraction addition(fraction f1, fraction f2){
    fraction f3;
    f1.numerator *= f2.denominator;
    f2.numerator *= f1.denominator;
    f3.numerator = f1.numerator + f2.numerator;
    f3.denominator = f1.denominator * f2.denominator;
    return reduction(f3);
}

fraction subtraction(fraction f1, fraction f2){
    fraction f3;
    f1.numerator *= f2.denominator;
    f2.numerator *= f1.denominator;
    f3.numerator = f1.numerator - f2.numerator;
    f3.denominator = f1.denominator * f2.denominator;
    return reduction(f3);
}

fraction multiplication(fraction f1, fraction f2){
    fraction f3;
    f3.numerator = f1.numerator * f2.numerator;
    f3.denominator = f1.denominator * f2. denominator;
    return reduction(f3);
}

fraction division(fraction f1, fraction f2){
    fraction f3;
    f3.numerator = f1.numerator * f2.denominator;
    f3.denominator = f1.denominator * f2.numerator;
    return reduction(f3);
}

int main(void){
    fraction f1 = {1, 2};
    fraction f2 = {3, 5};
    f1 = reduction(f1);
    printf("Fraction in Lowest terms: %d/%d\n", f1.numerator, f1.denominator);
    fraction f3 = addition(f1, f2);
    printf("Fractions added together: %d/%d\n", f3.numerator, f3.denominator);
    return 0;
}
