#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "boards.h"

const uint8_t onboard_leds[LEDS_NUMBER] = LEDS_LIST;

int main(void)
{
    while (true)
    {
        for(uint8_t i = 0; i < LEDS_NUMBER; i++){
            nrf_gpio_pin_set(onboard_leds[i]);
            nrf_delay_ms(200);
            nrf_gpio_pin_clear(onboard_leds[i]);
            nrf_delay_ms(200);
        } 
       
    }
}