run(Game game) {
    int x,y;
  while(game.state != GAME_OVER) {
    if (game.state == PLAYER_1) {
    printf("Joueur %d, entrez les coordonnees de votre prochaine attaque (x y) : ", PLAYER_1);
       if (boardP2[x][y] == 'I') {
                printf("Hit !\n");
                boardP2[x][y] = 'X';
            } else {
                printf("Miss !\n");
            }
            game.PLAYER_2;
    }
    if(game.state == PLAYER_2){
         printf("Joueur %d, entrez les coordonnees de votre prochaine attaque (x y) : ", PLAYER_2);
        if (game.boardP1[x][y] == 'I') {
            printf("Hit !\n");
            game.boardP1[x][y] = 'X';
            } 
            else {
            printf("Miss !\n");
            }
            game.PLAYER_1;
    }
    render(game);
  }
}