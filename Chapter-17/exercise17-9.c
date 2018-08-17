/* Is (&x)-> the same as x.a? */
#include <stdio.h>

struct test{
    int a;
} x = {4};

int main(void){
    printf("%d\n", (&x)->a);
    printf("%d\n", x.a);

    //Yes, they are equivilant 
}