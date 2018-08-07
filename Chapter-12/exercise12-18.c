/* Rewrite the evaluate position function from 9-13 using pointer       arithmatic */

#include <stdio.h>

int evaluate_position(char *board){
    int blackSum = 0;
    int whiteSum = 0;
    
    for(char *p = board; p < board + 8*8; p++){
        switch(*p){
            case 'q': blackSum += 9; break;
            case 'Q': whiteSum += 9; break;
            case 'r': blackSum += 5; break;
            case 'R': whiteSum += 5; break;
            case 'b': blackSum += 3; break;
            case 'B': whiteSum += 3; break;
            case 'n': blackSum += 3; break;
            case 'N': whiteSum += 3; break;
            case 'p': blackSum += 1; break;
            case 'P': whiteSum += 1; break;
        }
    }
    printf("White Sum: %d\nBlack Sum: %d\n", whiteSum, blackSum);
    return whiteSum - blackSum;
}

int main(void){

    char board[8][8] = {
                        {'-', '-', '-', '-', '-', '-', '-', '-'},
                        {'-', '-', '-', '-', 'p', '-', '-', '-'},
                        {'-', '-', 'P', '-', '-', '-', 'b', '-'},
                        {'-', '-', '-', 'p', 'p', '-', '-', '-'},
                        {'-', '-', 'Q', '-', '-', '-', '-', '-'},
                        {'-', 'B', 'B', '-', '-', '-', '-', '-'},
                        {'-', '-', '-', '-', '-', '-', '-', '-'},
                        {'-', '-', '-', '-', '-', '-', '-', '-'},
                       };

    printf("%d", evaluate_position(board[0]));
    
    return 0;
}