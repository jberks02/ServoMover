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
#include "./pwmControl.cpp"
using namespace std;

bool direction = true;
int servoPin = 0;

int LED = PICO_DEFAULT_LED_PIN;

void setEmbeddedLed(int LED) {

    gpio_init(LED);

    gpio_set_dir(LED, GPIO_OUT);

}

int main()
{
    S51Servo pin0Servo(servoPin, 0.0f, 180.0f, 225.0f);

    pin0Servo.setupAngleServoUpdateByAngle();

    setEmbeddedLed(LED);

    pin0Servo.setServoAngleByAngle(pin0Servo.maxAngle);

    sleep_ms(500);

    pin0Servo.setServoAngleByAngle(pin0Servo.minAngle);

    sleep_ms(1000);

    while (true)
    {
        
        gpio_put(LED, 0);
        
        for(int i = 0; i <= pin0Servo.maxAngle; i++ ) {
            pin0Servo.setServoAngleByAngle(i);
            sleep_ms(5);
        }
        gpio_put(LED, 1);
        for(int i = 180; i >= pin0Servo.minAngle; i--) {
            pin0Servo.setServoAngleByAngle(i);
            sleep_ms(5);
        }
        sleep_ms(200);
    }

    return 0;
}
