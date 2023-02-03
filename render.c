const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

render(Game game) {
  switch (game.state) {
    case WELCOME_SCREEN:
      renderWelcomeScreen();
        break;
    case GAME_OVER:
      renderGameOver();
        break;
    case PLAYER_1:
      renderBoard(game.boardP1);
        break;
    case PLAYER_2:
     renderBoard(game.boardP2);
        break;
  }
}

renderWelcomeScreen() {
  // SDL Stuff

}

renderGameOver(){
    // SDL stuff
}

renderBoard();{
    if(PLAYER_1){
        //SDL Stuff
    }
    if(PLAYER_2){
        //SDL Stuff
    }
}