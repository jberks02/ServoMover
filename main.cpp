/*
 * Servo Arm for Raspberry Pi Pico
 *
 * @version     1.0.0
 * @author     Justin Berkshire
 * @copyright   2022
 * @licence     MIT
 *
 */

#include "main.h"
#include "./pwmControl.cpp"
// #include "./automatedSequence.cpp"
using namespace std;

bool direction = true;
int servoPin = 2;

int LED = PICO_DEFAULT_LED_PIN;

void setEmbeddedLed(int LED) {

    gpio_init(LED);

    gpio_set_dir(LED, GPIO_OUT);

}

int main()
{
    S51Servo armBase(0, 0.0f, 180.0f, 250.0f);
    S51Servo armCantaLever(1,  0.0f, 130.0f, 250.0f);
    S51Servo armMain(2, 0.0f, 80.0f, 250.0f);
    S51Servo claw(3, -2.0f, 180.0f, 200.0f);
    S51Servo door(4, 0.0f, 180.0f, 250.0f);

    setEmbeddedLed(LED);
    gpio_put(LED, 1);    

    // AutomatedSequence controller(claw, door, armMain, armCantaLever, armBase);

    // controller.s/\etAutorun(true);

    while (true)
    {
        door.moveToAngleAtAnglePerTimeRate(100, 1);

        door.moveToAngleAtAnglePerTimeRate(1, 20);

        claw.moveToAngleAtAnglePerTimeRate(40, 1);

        armBase.moveToAngleAtAnglePerTimeRate(57, 20);

        armCantaLever.moveToAngleAtAnglePerTimeRate(6, 20);

        armMain.moveToAngleAtAnglePerTimeRate(8, 20);

        claw.moveToAngleAtAnglePerTimeRate(0, 20);

        armCantaLever.moveToAngleAtAnglePerTimeRate(20, 20);

        armMain.moveToAngleAtAnglePerTimeRate(0, 20);

        armBase.moveToAngleAtAnglePerTimeRate(50, 20);

        // armBase.setServoAngleByAngle(50);

        armCantaLever.moveToAngleAtAnglePerTimeRate(57, 20);

        armBase.moveToAngleAtAnglePerTimeRate(20, 20);

        armMain.moveToAngleAtAnglePerTimeRate(10, 20);

        claw.moveToAngleAtAnglePerTimeRate(40, 1);

        sleep_ms(500);

        armMain.moveToAngleAtAnglePerTimeRate(1, 20);

        armCantaLever.moveToAngleAtAnglePerTimeRate(1, 20);

        claw.moveToAngleAtAnglePerTimeRate(0, 1);

    }

    return 0;
}
