/* Suppose that the direction variable is declared in the following way
 * enum {NORTH, SOUTH, EAST, WEST} direction;
 * Let x and y be int variables. Write a switch statement that tests 
 * the value of direction
 */

#include <stdio.h>

int main(void){
    enum {NORTH, SOUTH, EAST, WEST} direction;

    direction = SOUTH;
    int x = 5;
    int y = 9;

    switch(direction){
        case EAST: x++; break;
        case WEST: x--; break;
        case NORTH: y++; break;
        case SOUTH: y--; break;
        default: break; 
    }
}