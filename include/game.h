#pragma once
#include <raylib.h>
typedef enum {
  PAUSED,
  RUNNING,
} GameState;

typedef struct {
  GameState state;
  Color background_color;
} Game;

void init_game(Game *g);

/* void handle_game_input(Game *g); */
/*  */
/* void update_game_state(Game *g); */
/*  */
void draw_game(Game *g);
void draw_scene();
