run(Game game) {
    int x,y;
  while(game.state != GAME_OVER) {
    if (game.state == PLAYER_1) {
    printf("Joueur %d, entrez les coordonnees de votre prochaine attaque (x y) : ", PLAYER_1);
       if (board2[x][y] == 'I') {
                printf("Hit !\n");
                board2[x][y] = 'X';
            } else {
                printf("Miss !\n");
            }
    }
    if(game.state == PLAYER_2){
         printf("Joueur %d, entrez les coordonnees de votre prochaine attaque (x y) : ", PLAYER_2);
        if (board1[x][y] == 'I') {
            printf("Hit !\n");
            board1[x][y] = 'X';
            } 
            else {
            printf("Miss !\n");
            }
            PLAYER_1;
    }
    render(game);
  }
}