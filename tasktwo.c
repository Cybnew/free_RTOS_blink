#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "tasktwo.h"


void vBlinkTaskTwo() {

   for (;;) {
      gpio_put(PICO_DEFAULT_LED_PIN, 1);
      vTaskDelay(200);
      gpio_put(PICO_DEFAULT_LED_PIN, 0);
      vTaskDelay(200);
   }    
}                       
