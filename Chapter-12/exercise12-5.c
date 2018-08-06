/* Which expressions are legal?
   (illegal expressions are edited out)
*/

#include <stdio.h>

int main(void){
    int a[] = {1, 2, 3, 4, 5, 6};
    int *p;
    p = a;
    //printf("%d\n", p == a[0]);
    printf("%d\n", p == &a[0]);
    printf("%d\n", *p == a[0]);
    printf("%d", p[0] == a[0]);

    return 0;
}