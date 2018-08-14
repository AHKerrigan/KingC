/* Using structs and enum's, write a program that can represent a 
 * chessboard, and add an initializer that corresponds to the board's
 * initial arrangement
 */
 
#include <stdio.h>

enum {ROOK, BISHOP, KING, QUEEN, KNIGHT, PAWN, EMPTY} Piece;
enum {BLACK, WHITE} Color;

typedef struct {
    Piece piece;
    Color color;
} Square;

int main(void){
    return 0;
}