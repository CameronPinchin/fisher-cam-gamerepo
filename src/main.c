#include "../include/kaiser.h"
#include "../include/init.h"
#include "../include/update.h"
#include "../include/draw.h"

#include <stdlib.h>

int main(void) {

    struct game_state* game_state = init();

    while (!WindowShouldClose()) {

        game_state = update(game_state);

        draw(game_state);

    }

    // Cleanup
    free(game_state);

    CloseWindow();

    return 0;

}
