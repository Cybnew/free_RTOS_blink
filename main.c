#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include <stdio.h>
#include "task.h"
#include "src/tasks/tasktwo.h"
#include "src/tasks/tasktwo.h"
/*
void vBlinkTask() {

   for (;;) {
      gpio_put(PICO_DEFAULT_LED_PIN, 1);
      vTaskDelay(1000);
      gpio_put(PICO_DEFAULT_LED_PIN, 0);
      vTaskDelay(1000);
   }
}
*/
/*
void vBlinkTask2(){
  for (;;){
    gpio_put(PICO_DEFAULT_LED_PIN, 1);
    vTaskDelay(200);
    gpio_put(PICO_DEFAULT_LED_PIN,0);
    vTaskDelay(250);
  }
}
*/
void main() {
   gpio_init(PICO_DEFAULT_LED_PIN);
   gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
   xTaskCreate(vBlinkTask, "Blink Task", 128, NULL, 1, NULL);
   xTaskCreate(vBlinkTaskTwo, "Blink Task 2", 128, NULL, 2, NULL);
   vTaskStartScheduler();
}
