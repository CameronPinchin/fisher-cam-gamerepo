#include "raylib.h"

#ifndef KASIER_H
#define KAISER_H

#define SCREEN_HEIGHT               1000
#define SCREEN_WIDTH                1000
#define FRAMES_PER_SECOND           60

#define MAX_OBSTACLES               5

struct coordinate_position {
    int x;
    int y;
};

struct obstacle {
    struct coordinate_position *coordinate_position;                /* (x,y) positions on the board */
    int height;
    int width;
};

struct player_state {

};

struct obstacle_state {
    struct obstacle *all_obstacles[MAX_OBSTACLES];
};

struct game_state {
    struct player_state player;
    struct obstacle_state *obstacle_state;
};

#endif
