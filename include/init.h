#include "kaiser.h"

/* OBSTACLE MACROS */
#define OBSTACLE_ONE_X                  67
#define OBSTACLE_ONE_Y                  60
#define OBSTACLE_ONE_WIDTH              260
#define OBSTACLE_ONE_HEIGHT             90

#define OBSTACLE_TWO_X                  700
#define OBSTACLE_TWO_Y                  60
#define OBSTACLE_TWO_WIDTH              260
#define OBSTACLE_TWO_HEIGHT             90

#define OBSTACLE_THREE_X                19
#define OBSTACLE_THREE_Y                186
#define OBSTACLE_THREE_WIDTH            90
#define OBSTACLE_THREE_HEIGHT           260

#define OBSTACLE_FOUR_X                 161
#define OBSTACLE_FOUR_Y                 359
#define OBSTACLE_FOUR_WIDTH             260
#define OBSTACLE_FOUR_HEIGHT            90

#define OBSTACLE_FIVE_X                 491
#define OBSTACLE_FIVE_Y                 359
#define OBSTACLE_FIVE_WIDTH             260
#define OBSTACLE_FIVE_HEIGHT            90

#define OBSTACLE_SIX_X                  873
#define OBSTACLE_SIX_Y                  206
#define OBSTACLE_SIX_WIDTH              90
#define OBSTACLE_SIX_HEIGHT             260

#define OBSTACLE_SEVEN_X                688
#define OBSTACLE_SEVEN_Y                480
#define OBSTACLE_SEVEN_WIDTH            90
#define OBSTACLE_SEVEN_HEIGHT           260

#define OBSTACLE_EIGHT_X                97
#define OBSTACLE_EIGHT_Y                500
#define OBSTACLE_EIGHT_WIDTH            260
#define OBSTACLE_EIGHT_HEIGHT           90

#define OBSTACLE_NINE_X                 175
#define OBSTACLE_NINE_Y                 790
#define OBSTACLE_NINE_WIDTH             260
#define OBSTACLE_NINE_HEIGHT            90

#define OBSTACLE_TEN_X                  565
#define OBSTACLE_TEN_Y                  790
#define OBSTACLE_TEN_WIDTH              260
#define OBSTACLE_TEN_HEIGHT             90


/* FORWARD DECLARATIONS */
struct game_state* init();
void cleanup(struct game_state*);
