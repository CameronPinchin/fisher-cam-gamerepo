#include "../include/kaiser.h"

#include <stdio.h>

void draw_obstacles(const struct game_state* game_state)
{
    int err, i;

    for(i = 0; i < MAX_OBSTACLES; i++){
        DrawRectangle(
            game_state->obstacle_state->all_obstacles[i]->coordinate_position->x,
            game_state->obstacle_state->all_obstacles[i]->coordinate_position->y,
            game_state->obstacle_state->all_obstacles[i]->width,
            game_state->obstacle_state->all_obstacles[i]->height,
            RED
        );
    }
}

/* Maybe we return an int for error handling purposes
 *  return 0 and end-of-function if successful, 1 otherwise
 **/
void draw(const struct game_state* game_state)
{

    BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("The inception of the Kaiser project.\nI've never watched inception.", 190, 200, 20, DARKGRAY);

        /* Draw Obastacles */
        draw_obstacles(game_state);


    EndDrawing();

}
