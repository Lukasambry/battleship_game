#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BOARD_SIZE 10

char board1[BOARD_SIZE][BOARD_SIZE];
char board2[BOARD_SIZE][BOARD_SIZE];
char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','<-','x'};
typedef struct {
    int size;
    int count;
} Ship;

Ship ships[] = {
        {2, 1},
        {3, 2},
        {4, 1},
        {5, 1},
};

void initBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = 'o';
        }
    }
}

int isValidPlacement(char board[BOARD_SIZE][BOARD_SIZE], int x, int y, int orientation, int size) {
    if (orientation == 0) {  // Navire horizontal
        if (y + size > BOARD_SIZE) return 0;  // Dépasse du bord droit du tableau
        for (int i = 0; i < size; i++) {
            if (board[x][y + i] != 'o') return 0;  // Chevauche un autre navire
        }
    } else {  // Navire vertical
        if (x + size > BOARD_SIZE) return 0;  // Dépasse du bord inférieur du tableau
        for (int i = 0; i < size; i++) {
            if (board[x + i][y] != 'o') return 0;  // Chevauche un autre navire
        }
    }
    return 1;
}


void placeShips(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < sizeof(ships) / sizeof(Ship); i++) {
        Ship s = ships[i];
        for (int j = 0; j < s.count; j++) {
            int orientation = rand() % 2;  // 0 = horizontale, 1 = verticale
            int x, y;
            do {
                x = rand() % BOARD_SIZE;
                y = rand() % BOARD_SIZE;
            } while (!isValidPlacement(board, x, y, orientation, s.size));  // Vérifie que la position est valide

            if (orientation == 0) {
                for (int k = 0; k < s.size; k++) {
                    board[x][y + k] = 'I';
                }
            } else {
                for (int k = 0; k < s.size; k++) {
                    board[x + k][y] = 'I';
                }
            }
        }
    }
}

void printBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    // Affiche le tableau
    printf("  ");
    for (int i = 0; i < BOARD_SIZE+2; i++) {
        printf("%c ", alphabet[i]);
    }
    printf("\n");
    for (int i = 0; i < BOARD_SIZE+2; i++) {
        if(i == 10) printf("%c ", '|');
        else if(i == 11) printf("%c ", 'y');
        else printf("%d ", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "fr_FR.utf8");
    initBoard(board1);
    placeShips(board1);
    initBoard(board2);
    placeShips(board2);

    // Boucle de jeu
    int player = 1;
    int x,y;
    while (1) {
        if(player == 1) printBoard(board1);
        else printBoard(board2);
        printf("Joueur %d, entrez les coordonnees de votre prochaine attaque (x y) : ", player);
        scanf("%d %d", &x, &y);
        // x = x - 65;
        //printf("\n%d %d", x,y);
        //printf("\n%c", board1[x][y]);



        if (player == 1) {

            if (board2[x][y] == 'I') {
                printf("Touche !\n");
                board2[x][y] = 'X';
            } else {
                printf("Rate !\n");
            }
            player = 2;
        } else {
            if (board1[x][y] == 'I') {
                printf("Touche !\n");
                board1[x][y] = 'X';
            } else {
                printf("Rate !\n");
            }
            player = 1;
        }
    }
}