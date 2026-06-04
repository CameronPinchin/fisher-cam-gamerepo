#include "../include/kaiser.h"
#include "../include/init.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

static void populate_struct(struct obstacle* obstacle, int x, int y, int w, int h)
{
    obstacle->coordinate_position->x = x;
    obstacle->coordinate_position->y = y;
    obstacle->width = w;
    obstacle->height = h;
}

/* this will get changed to a loop, macros are for an initial testing ground & switch case is more performant due to costs paid at compile time */
static struct obstacle* init_obstacle(int obstacle_index)
{
    struct obstacle* obstacle = malloc(sizeof(*obstacle));
    obstacle->coordinate_position = malloc(sizeof(*obstacle->coordinate_position));

    if(obstacle == NULL || obstacle->coordinate_position == NULL){
        free(obstacle->coordinate_position);
        free(obstacle);
        fprintf(stderr, "[ERROR] %s\n", strerror(errno));
        return NULL;
    }

    switch (obstacle_index){
        case 0:

            populate_struct(obstacle, OBSTACLE_ONE_X, OBSTACLE_ONE_Y, \
                OBSTACLE_ONE_WIDTH, OBSTACLE_ONE_HEIGHT);

            return obstacle;
        case 1:

            populate_struct(obstacle, OBSTACLE_TWO_X, OBSTACLE_TWO_Y, \
                OBSTACLE_TWO_WIDTH, OBSTACLE_TWO_HEIGHT);

            return obstacle;
        case 2:

            populate_struct(obstacle, OBSTACLE_THREE_X, OBSTACLE_THREE_Y, \
                OBSTACLE_THREE_WIDTH, OBSTACLE_THREE_HEIGHT);

            return obstacle;
        case 3:

            populate_struct(obstacle, OBSTACLE_FOUR_X, OBSTACLE_FOUR_Y, \
                OBSTACLE_FOUR_WIDTH, OBSTACLE_FOUR_HEIGHT);

            return obstacle;
        case 4:

            populate_struct(obstacle, OBSTACLE_FIVE_X, OBSTACLE_FIVE_Y, \
                OBSTACLE_FIVE_WIDTH, OBSTACLE_FIVE_HEIGHT);

            return obstacle;
        case 5:

            populate_struct(obstacle, OBSTACLE_SIX_X, OBSTACLE_SIX_Y, \
                OBSTACLE_SIX_WIDTH, OBSTACLE_SIX_HEIGHT);

            return obstacle;
        case 6:

            populate_struct(obstacle, OBSTACLE_SEVEN_X, OBSTACLE_SEVEN_Y, \
                OBSTACLE_SEVEN_WIDTH, OBSTACLE_SEVEN_HEIGHT);

            return obstacle;
        case 7:

            populate_struct(obstacle, OBSTACLE_EIGHT_X, OBSTACLE_EIGHT_Y, \
                OBSTACLE_EIGHT_WIDTH, OBSTACLE_EIGHT_HEIGHT);

            return obstacle;
        case 8:

            populate_struct(obstacle, OBSTACLE_NINE_X, OBSTACLE_NINE_Y, \
                OBSTACLE_NINE_WIDTH, OBSTACLE_NINE_HEIGHT);

            return obstacle;
        case 9:

            populate_struct(obstacle, OBSTACLE_TEN_X, OBSTACLE_TEN_Y, \
                OBSTACLE_TEN_WIDTH, OBSTACLE_TEN_HEIGHT);

            return obstacle;
        default:
            fprintf(stderr, "[ERROR] Failed to initialize objects. Returning NULL.\n");
            return NULL;
    };
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
    const int screenWidth = SCREEN_WIDTH;
    const int screenHeight = SCREEN_HEIGHT;

    InitWindow(screenWidth, screenHeight, "Operation kaiser");

    struct game_state* game_state = malloc(sizeof *game_state);
    game_state->obstacle_state = malloc(sizeof *game_state->obstacle_state); // all pointer-members need to be malloc'd too.
    init_obstacles(game_state);

    return game_state;
}

void cleanup(struct game_state* game_state)
{
    int i;

    for(i = 0; i < MAX_OBSTACLES; i++){
        free(game_state->obstacle_state->all_obstacles[i]->coordinate_position);
        free(game_state->obstacle_state->all_obstacles[i]);
    }

    free(game_state->obstacle_state->all_obstacles);
    free(game_state->obstacle_state);
    free(game_state);

}
