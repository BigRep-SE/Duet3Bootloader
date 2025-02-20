/*
 * BoardDef.h
 *
 *  Created on: 30 Jun 2019
 *      Author: David
 */

#ifndef SRC_CONFIG_BOARDDEF_H_
#define SRC_CONFIG_BOARDDEF_H_

#if SAME5x
# include "SAME51config.h"
#endif

#if SAMC21
# include "SAMC21config.h"
#endif

#if SAME70
# include "SAME70config.h"
#endif

#define SUPPORT_CAN_EXPANSION	1

#define IS_CUSTOM_MOTOR_BOARD (defined(__CB_MP_03_A__) || defined(__CB_MP_04_A__) || defined(__CB_MP_05_A__) || defined(__CB_MT_01__))
#define IS_CUSTOM_STAGE_BOARD (defined(__CB_SB_04__) || defined(__CB_SB_06__) || defined(__CB_SB_07__))
#define IS_CUSTOM_EXTRUDER_BOARD (defined(__CB_CX_01__) || defined(__CB_CX_02__))
#define IS_CUSTOM_BOARD (IS_CUSTOM_MOTOR_BOARD || IS_CUSTOM_STAGE_BOARD || IS_CUSTOM_EXTRUDER_BOARD)
#define IS_NOT_CUSTOM_BOARD (!IS_CUSTOM_BOARD)

#endif /* SRC_CONFIG_BOARDDEF_H_ */
