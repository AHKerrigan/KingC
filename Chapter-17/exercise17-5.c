/* Which statements are legal given the struct declared? */

struct {
    union {
        char a, b;
        int c;
    } d;
    int e[5];
} f, *p = &f;

int main(void){
    //p->b = ' ';
    p->e[3] = 10;
    (*p).d.a = '*';
    //p->d->c = 20;
}