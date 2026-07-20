#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    printf("\n");
    printf("EvanOS booting...\n");
    printf("Target: ESP32-WROOM-32E\n");
    printf("Version: 0.1-dev\n");

    while (1) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
