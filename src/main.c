#include "game.h"
#include <raylib.h>

#define SCREEN_WIDTH 900
#define SCREEN_HEIHT 900
#define TARGET_FPS 60

int main() {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIHT, "The Endless");
  SetExitKey(KEY_Q);
  SetTargetFPS(TARGET_FPS);

  Game game;
  init_game(&game);

  while (!WindowShouldClose()) {
    /* handle_game_input(game); */
    /* update_game_state(game); */
    draw_game(&game);
  }
  CloseWindow();
  return 0;
}
