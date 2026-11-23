#include <stdint.h>
#include "platform.h"
#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TMR4, CH1, PB6,  TIM_USE_OUTPUT_AUTO, 0, 0),          // S1: Motor 1 (DMA2 CH7)
    DEF_TIM(TMR4, CH2, PB7,  TIM_USE_OUTPUT_AUTO, 0, 2),          // S2: Motor 2 (DMA2 CH6)
    DEF_TIM(TMR2, CH4, PA3,  TIM_USE_OUTPUT_AUTO, 0, 1),          // S3: Motor 3 (DMA2 CH5)
    DEF_TIM(TMR3, CH4, PB1,  TIM_USE_OUTPUT_AUTO, 0, 3),          // S4: Motor 4 (DMA2 CH4)

    DEF_TIM(TMR2, CH4, PB11, TIM_USE_ANY | TIM_USE_SERVO, 0, 0),  // S5: Servo 1 (Old UART3_TX)
    DEF_TIM(TMR1, CH1, PA8,  TIM_USE_ANY | TIM_USE_SERVO, 0, 6),  // S6: Servo 2 (Old LED PAD)
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
