#include "../include/kaiser.h"
#include "../include/init.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* this will get changed to a loop, macros are for an initial testing ground & switch case is more performant due to costs paid at compile time */
static struct obstacle* init_obstacle(int obstacle_index)
{
    // add error handling if malloc fails
    struct obstacle* obstacle = malloc(sizeof(*obstacle));
    obstacle->coordinate_position = malloc(sizeof(*obstacle->coordinate_position));

    switch (obstacle_index){
        case 0:
            obstacle->coordinate_position->x = OBSTACLE_ONE_X;
            obstacle->coordinate_position->y = OBSTACLE_ONE_Y;
            obstacle->width = OBSTACLE_ONE_WIDTH;
            obstacle->height = OBSTACLE_ONE_HEIGHT;

            return obstacle;
        case 1:
            obstacle->coordinate_position->x = OBSTACLE_TWO_X;
            obstacle->coordinate_position->y = OBSTACLE_TWO_Y;
            obstacle->width = OBSTACLE_TWO_WIDTH;
            obstacle->height = OBSTACLE_TWO_HEIGHT;

            return obstacle;
        case 2:
            obstacle->coordinate_position->x = OBSTACLE_THREE_X;
            obstacle->coordinate_position->y = OBSTACLE_THREE_Y;
            obstacle->width = OBSTACLE_THREE_WIDTH;
            obstacle->height = OBSTACLE_THREE_HEIGHT;

            return obstacle;
        case 3:
            obstacle->coordinate_position->x = OBSTACLE_FOUR_X;
            obstacle->coordinate_position->y = OBSTACLE_FOUR_Y;
            obstacle->width = OBSTACLE_FOUR_WIDTH;
            obstacle->height = OBSTACLE_FOUR_HEIGHT;

            return obstacle;
        case 4:
            obstacle->coordinate_position->x = OBSTACLE_FIVE_X;
            obstacle->coordinate_position->y = OBSTACLE_FIVE_Y;
            obstacle->width = OBSTACLE_FIVE_WIDTH;
            obstacle->height = OBSTACLE_FIVE_HEIGHT;

            return obstacle;
        default:
            fprintf(stderr, "[ERROR] Failed to initialize objects. Returning NULL.\n");
            return NULL;
    };

    return obstacle;
}

static int init_obstacles(struct game_state* game_state)
{
    int i;

    for(i = 0; i < MAX_OBSTACLES; i++){
        game_state->obstacle_state->all_obstacles[i] = init_obstacle(i);
    }

    fprintf(stderr, "[DBG] Obstacles have successfully been initialized.\n");

    return 0;
}

struct game_state* init()
{
    int err;
    const int screenWidth = SCREEN_WIDTH;
    const int screenHeight = SCREEN_HEIGHT;

    InitWindow(screenWidth, screenHeight, "Operation kaiser");

    struct game_state* game_state = malloc(sizeof *game_state);
    game_state->obstacle_state = malloc(sizeof *game_state->obstacle_state); // all pointer-members need to be malloc'd too.
    err = init_obstacles(game_state);

    return game_state;
}
