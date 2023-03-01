#include "app_spim.h"

void spim_led_function(void)
{
    GPIOA->odt ^= GPIO_PINS_1;
}