#pragma once

#include "at32f403a_407.h"

#define STEP_DELAY_MS                    50

static __IO uint32_t fac_us;
static __IO uint32_t fac_ms;

void delay_init(void);
void delay_us(uint32_t nus);
void delay_ms(uint16_t nms);
void delay_sec(uint16_t sec);