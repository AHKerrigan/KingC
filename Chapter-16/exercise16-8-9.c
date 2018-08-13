/* Let color be a struct with members red, green, and blue
 * a) Write a declaraction for a const variable named MAGENTS of type
 * struct color whose members have the values 255, 0, 255 respectively
 */

#include <stdio.h>
#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue){
    struct color newColor;
    if(red > 255){
        newColor.red = 255;
    }
    else if(red < 0){
        newColor.red = 0;
    }
    else{
        newColor.red = red;
    }
    if(green > 255){
        newColor.green = 255;
    }
    else if(green < 0){
        newColor.green = 0;
    }
    else{
        newColor.green = green;
    }
    if(blue > 255){
        newColor.blue = 255;
    }
    else if(blue < 0){
        newColor.blue = 0;
    }
    else{
        newColor.blue = blue;
    }
    return newColor;
}

int getRed(struct color c){
    return c.red;
}

// Returns true if the two colors are the same

bool equal_color(struct color c1, struct color c2){
    if(c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue){
        return true;
    }
    else{
        return false;
    }
}


struct color brighter(struct color c){
    struct color newColor;
    if(c.red == 0 && c.green == 0 && c.blue == 0){
        return (struct color){3, 3, 3};
    }
    if(c.red > 0 && c.red < 3){
        newColor.red = 3;
    }
    if(c.green > 0 && c.green < 3){
        newColor.green = 3;
    }
    if(c.blue > 0 && c.blue < 3){
        newColor.blue = 3;
    }
    newColor.red /= 0.7;
    newColor.green /= 0.7;
    newColor.blue /= 0.7;

    if(newColor.red > 255){
        newColor.red = 255;
    }
    if(newColor.green > 255){
        newColor.green = 255;
    }
    if(newColor.blue > 255){
        newColor.blue = 255;
    }
    return newColor;
}

struct color darker(struct color c){
    struct color newColor;
    if(c.red == 0 && c.green == 0 && c.blue == 0){
        return (struct color){3, 3, 3};
    }
    if(c.red > 0 && c.red < 3){
        newColor.red = 3;
    }
    if(c.green > 0 && c.green < 3){
        newColor.green = 3;
    }
    if(c.blue > 0 && c.blue < 3){
        newColor.blue = 3;
    }
    newColor.red *= 0.7;
    newColor.green *= 0.7;
    newColor.blue *= 0.7;

    if(newColor.red > 255){
        newColor.red = 255;
    }
    if(newColor.green > 255){
        newColor.green = 255;
    }
    if(newColor.blue > 255){
        newColor.blue = 255;
    }
    return newColor;
}

int main(void){
    struct color myColor = make_color(255, 0, 255);
    return 0;
}