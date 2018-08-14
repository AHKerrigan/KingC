/* Using structs and enum's, write a program that can represent a 
 * chessboard, and add an initializer that corresponds to the board's
 * initial arrangement
 */
 
#include <stdio.h>

typedef enum {ROOK, BISHOP, KING, QUEEN, KNIGHT, PAWN, EMPTY} Piece;
typedef enum {BLACK, WHITE} Color;

typedef struct {
    Piece piece;
    Color color;
} Square;

void initialBoard(Square board[8][8]){
    board[0][0].piece = ROOK;
    board[0][1].piece = KNIGHT;
    board[0][2].piece = BISHOP;
    board[0][3].piece = QUEEN;
    board[0][4].piece = KING;
    board[0][5].piece = BISHOP;
    board[0][6].piece = KNIGHT;
    board[0][7].piece = ROOK;

    // White's pawns
    for(int i = 0; i < 8; i++){
        board[1][i].piece = PAWN;
    }
    // White's color
    for(int i = 0; i < 2; i++){
        for(int n = 0; n < 8; n++){
            board[i][n].color = WHITE;
        }
    }

    // Blank squares;
    for(int i = 2; i < 6; i++){
        for(int n = 0; n < 8; n++){
            board[i][n].piece = EMPTY;
        }
    }

    // Blacks's pawns
    for(int i = 0; i < 8; i++){
        board[6][i].piece = PAWN;
    }

    // Blacks special pieces
    board[7][0].piece = ROOK;
    board[7][1].piece = KNIGHT;
    board[7][2].piece = BISHOP;
    board[7][3].piece = QUEEN;
    board[7][4].piece = KING;
    board[7][5].piece = BISHOP;
    board[7][6].piece = KNIGHT;
    board[7][7].piece = ROOK;

    // Black's's color
    for(int i = 6; i < 8; i++){
        for(int n = 0; n < 8; n++){
            board[i][n].color = WHITE;
        }
    }

}

void printBoard(Square board[8][8]){
    for(int i = 0; i < 8; i++){
        for(int n = 0; n < 8; n++){
            if(board[i][n].piece == EMPTY){
                printf("XX ");
                continue;
            }
            switch(board[i][n].color){
                case WHITE: printf("W"); break;
                case BLACK: printf("B"); break;
                default: break;
            }
            switch(board[i][n].piece){
                case ROOK: printf("R"); break;
                case KNIGHT: printf("K"); break;
                case BISHOP: printf("B"); break;
                case QUEEN: printf("Q"); break;
                case KING: printf("K"); break;
                case PAWN: printf("P"); break;
                default: break;
            }
            printf(" ");
        }
        printf("\n");
    }
}

int main(void){
    Square board[8][8];
    initialBoard(board);
    printBoard(board);
    return 0;

}