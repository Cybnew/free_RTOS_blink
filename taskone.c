#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "taskone.h"


void vBlinkTask() {

   for (;;) {
      gpio_put(PICO_DEFAULT_LED_PIN, 1);
      vTaskDelay(1000);
      gpio_put(PICO_DEFAULT_LED_PIN, 0);
      vTaskDelay(1000);
   }    
}                       
