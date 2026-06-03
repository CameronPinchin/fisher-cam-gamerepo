# Kaiser
Simple raylib-based maze game to practice collaboration on a Git repository and system design. 

## Source file documentation

### draw.c 

*draw.c* | The drawing logic for plotting points onto the screen. Exposes the draw() function. 

### init.c 

*init.c* | The initialization logic for all entities (player, obstacle, window) when the user launches the binary. Exposes the init() function.

### update.c  

*update.c* | The logic for updating the game_state struct at runtime. 

### main.c 

*main.c* | The standard entry point to any process, and leverages each exposed function from other files.
