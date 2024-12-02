#include "game.h"
#include <raylib.h>

void init_game(Game *g) {
  g->state = RUNNING;
  g->background_color = (Color){147, 211, 196, 255};
}

/* void handle_game_input() {} */
/*  */
/* void update_game_state() {} */
/*  */
void draw_scene() {}

void draw_game(Game *g) {
  BeginDrawing();
  ClearBackground(g->background_color);
  draw_scene();
  EndDrawing();
}
