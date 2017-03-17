
#ifndef STATE_CONTROL_TREX_H
#define STATE_CONTROL_TREX_H

/*
 *  ====== TREX'S ANIMATIONS ======
 */
#define TR_ANIMATION_TREX_STAY 0
#define TR_ANIMATION_TREX_RUN 1
#define TR_ANIMATION_TREX_WALK 2
#define TR_ANIMATION_TREX_ARRRR 5
#define TR_ANIMATION_TREX_ATTACK 6
#define TR_ANIMATION_TREX_DEAD 10
#define TR_ANIMATION_TREX_KILL 11

//   ====== TREX'S STATES ======

#define TR_STATE_TREX_STAY 1  // -> 2 -> 3 -> 5 -> 6 -> 7
#define TR_STATE_TREX_WALK 2  // -> 1
#define TR_STATE_TREX_RUN 3   // -> 1
#define TR_STATE_TREX_DEAD 5
#define TR_STATE_TREX_ARRRR 6
#define TR_STATE_TREX_ATTACK 7
#define TR_STATE_TREX_KILL 8

#endif
