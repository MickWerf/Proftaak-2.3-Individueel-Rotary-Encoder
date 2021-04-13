#include <stdio.h>
#include <stdint.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <sys/time.h>
#include <hd44780.h>
#include <pcf8574.h>
#include <string.h>
#include "periph_sdcard.h"
#include "LCD/LCD.h"
#include "home.h"
#include "RotaryEncoder_Adapter.h"
#include "../menutools/statusbar/statusbar.h"
#include "AudioSetup/AudioSetup.h"
#include "audioRecognition.h"

#include "audioRecognition.h"

#define SDA_GPIO 18
#define SCL_GPIO 23
#define I2C_ADDR 0x27

void initializeRotary() {
    commands_t void_func_ptr;
    void_func_ptr.left = &scrollLeft;;
    void_func_ptr.right = &scrollRight;;
    void_func_ptr.press = &getSelectedOption;

    RotaryEncoder_AdapterInit(void_func_ptr);
}

/*end of example*/
void app_main() {
    ESP_ERROR_CHECK(i2cdev_init());
    //START OF ROTARY TASK
    initializeRotary();

    while (1) {
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}
