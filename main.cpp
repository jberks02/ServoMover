/*
 * Blink for Raspberry Pi Pico
 *
 * @version     1.0.0
 * @author     Justin Berkshire
 * @copyright   2022
 * @licence     MIT
 *
 */
#include "main.h"
using namespace std;

float minMillis =  64.f;
float maxMillis = 39062.f;

bool direction = true;
int currentMillis = 400;
int servoPin = 0;

void setMillis(int servoPin, float millis) {
    pwm_set_gpio_level(servoPin, (millis/20000.f)/maxMillis);
}

void setServo(int servoPin, float startMillis) {
    
    gpio_set_function(servoPin, GPIO_FUNC_PWM);

    uint slice_num = pwm_gpio_to_slice_num(servoPin);

    pwm_config config = pwm_get_default_config();
    pwm_config_set_clkdiv(&config, 64.f);
    pwm_config_set_wrap(&config, 39062.f);

    pwm_init(slice_num, &config, true);

    setMillis(servoPin, startMillis);

}

int main()
{
    setServo(servoPin, currentMillis);

    while (true)
    {
        if (direction == true) {
            currentMillis += 5;
        } else {
            currentMillis -= 5;
        }
        if(currentMillis >= 2400) direction = false;
        if(currentMillis <= 400) direction = true;

        setMillis(servoPin, currentMillis);
        sleep_ms(10);
    }

    return 0;
}
