#include <stdint.h>
#include "platform.h"
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TMR4, CH1, PB6,  TIM_USE_OUTPUT_AUTO, 0, 0),          // S1: Motor 1 (DMA2 CH7)
    DEF_TIM(TMR4, CH2, PB7,  TIM_USE_OUTPUT_AUTO, 0, 2),          // S2: Motor 2 (DMA2 CH6)
//  DEF_TIM(TMR2, CH4, PA3,  TIM_USE_OUTPUT_AUTO, 0, 1),          // S3: 無効化（PB11とTMR2 CH4が競合するため）
//  DEF_TIM(TMR3, CH4, PB1,  TIM_USE_OUTPUT_AUTO, 0, 3),          // S4: 無効化

    DEF_TIM(TMR2, CH4, PB11, TIM_USE_ANY | TIM_USE_SERVO, 0, 0),  // S3: Servo 1 (PB11)
    DEF_TIM(TMR1, CH1, PA8,  TIM_USE_ANY | TIM_USE_SERVO, 0, 6),  // S4: Servo 2 (PA8)
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
