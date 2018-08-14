/* Write functions for the shape tag that
 * computer the area of s
 * Move s by x units in the x direction and y units in the y direction
 * Svale s by a factor of c (a double value), returning the modified 
 * version of s
 */
#include <stdio.h>
#define PI 3.1495

struct point {
    int x, y;
};

struct shape {
    enum {RECTANGLE, CIRCLE} shape_kind;
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
};

// Computes the area of a shape s.
double area(struct shape s){
    if(s.shape_kind == CIRCLE){
        return PI * (s.u.circle.radius * s.u.circle.radius);
    }
    if(s.shape_kind == RECTANGLE){
        return s.u.rectangle.height * s.u.rectangle.width;
    }
}

// Takes a shape s and moves it's center x and y units
struct shape move(struct shape s, int x, int y){
    s.center.x += x;
    s.center.y += y;
    return s;
}

// Takes a shape as input and returns it scaled by c
struct shape scale(struct shape s, double c){
    if(s.shape_kind == CIRCLE){
        s.u.circle.radius *= c;
        return s;
    }
    if(s.shape_kind == RECTANGLE){
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
        return s;
    }
}

int main(void){
    struct shape s;
    s.shape_kind = RECTANGLE;
    s.center.x = 10;
    //s.height = 25;
    s.u.rectangle.width = 8;
    //s.u.circle = 5;
    //s.u.radius = 5;
}