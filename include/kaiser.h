#include "raylib.h"
#include "raymath.h"

#ifndef KASIER_H
#define KAISER_H

#define SCREEN_HEIGHT               450
#define SCREEN_WIDTH                800
#define FRAMES_PER_SECOND           60

struct coordinate_position {
    int x;
    int y;
};

struct obstacle {
    struct coordinate_position;                /* (x,y) positions on the board */
    const int length;
    const int width;
};

struct player {
    float speed;
    Vector2 pos;
    Vector2 vel;
    Vector2 size;
};

struct obstacle_state {

};

struct game_state {
    struct player player;
    struct obstacle_state obstacle;
};

#endif
