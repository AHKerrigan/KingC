/* Given the following
 * struct point {int x, y}
 * struct rectangle {struct point upper_left, lower_right}
 *
 *a) Computer the area of r
 *b) Computer the center of r
 *c) Move r by x units and y units in y direction
 *d) Determine whether a point p within r
 */

#include <stdio.h>
#include <stdbool.h>

struct point {
    int x, y;
};

struct rectangle{
    struct point upper_left, lower_right;
};

// Takes points representing the upper left and bottom right of a rectangle
// Returns the corresponding rectangle struct
struct rectangle makeRectangle(int x1, int y1, int x2, int y2){
    struct rectangle r;
    r.upper_left.x = x1;
    r.upper_left.y = y1;
    r.lower_right.x = x2;
    r.lower_right.y = y2;
    return r;
}

// Takes a rectangle as input and returns the area
int area(struct rectangle r){
    int vertical = r.lower_right.x - r.upper_left.x;
    int horizontal = r.upper_left.y - r.lower_right.y;
    return vertical * horizontal;
}

struct point center(struct rectangle r){
    struct point c;
    int vertical = r.lower_right.x - r.upper_left.x;
    int horizontal = r.upper_left.y - r.lower_right.y;
    vertical /= 2;
    horizontal /= 2;
    c.x = r.upper_left.x + horizontal;
    c.y = r.lower_right.y + vertical;
    return c;
}

/* Takes a rectangle r as input and moves it x units right and y units up
 */
struct rectangle move(struct rectangle r, int x, int y){
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;
    return r;
}

bool containsPoint(struct rectangle r, struct point p){
    if(p.x < r.upper_left.x || p.x > r.lower_right.x){
        return false;
    }
    if(p.y > r.upper_left.y || p.y < r.lower_right.y){
        return false;
    }
    else{
        return true;
    }
}

int main(void){
    struct rectangle r = makeRectangle(3, 5, 7, 1);
    r = move(r, 1, 1);
    struct point point1 = (struct point){0, 0};
    struct point point2 = (struct point){4, 4};
    printf("The area of the rectangle is: %d\n", area(r));
    printf("The center of the rectangle is: %d,%d\n", center(r).x, center(r).y);
    printf("The rectangle containts 0,0: %d\n", containsPoint(r, point1));
    printf("The rectangle contains 4,4: %d\n", containsPoint(r, point2));

}

