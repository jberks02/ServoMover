// #include "main.h"
// #include "./pwmControl.cpp"
// using namespace std;

// class AutomatedSequence 
// {
// private:
//     bool autoRunning;

// private:
//     bool ready = false;

// // private:
// //     S51Servo claw;

// // private:
// //     S51Servo door;

// // private:
// //     S51Servo arm;

// // private:
// //     S51Servo lever;

// // private:
// //     S51Servo base;

// public:
//     AutomatedSequence(int sentClaw, int sentDoor, int sentArm, int sentLever, int sentBase)
//     {
//         autoRunning = false;
//         // claw = claw(sentClaw, 0.0f, 90.0f, 250.0f);
//         // door = door(sentDoor, 0.0f, 180.0f, 250.0f);
//         // arm = arm(sentArm, 0.0f, 80.0f, 250.0f);
//         // lever = lever(sentLever, 0.0f, 130.0f, 250.0f);
//         // base = base(sentBase, 0.0f, 180.0f, 250.0f);
//     }

//     // public:
//     //     void setMotors(S51Servo sentClaw, S51Servo sentDoor, S51Servo sentArm, S51Servo sentLever, S51Servo sentBase)
//     //     {
//     //         S51Servo claw = sentClaw;
//     //         S51Servo door = sentDoor;
//     //         S51Servo arm = sentArm;
//     //         S51Servo lever = sentLever;
//     //         S51Servo base = sentBase;
//     //         ready = true;
//     //     };

// public:
//     void setAutorun(bool run)
//     {
//         if (ready == false)
//             return;

//         if (autoRunning == false && run == true)
//         {
//             autoRunning = run;
//             sequence();
//         }
//         else
//         {
//             autoRunning = run;
//         }
//     };

// public:
//     bool getAutorun()
//     {
//         return autoRunning;
//     };

// private:
//     void sequence()
//     {
//         try
//         {

//             while (autoRunning == true)
//             {

//                 // door.moveToAngleAtAnglePerTimeRate(100, 20);

//                 // door.moveToAngleAtAnglePerTimeRate(1, 5);

//                 // claw.moveToAngleAtAnglePerTimeRate(90, 1);

//                 // base.moveToAngleAtAnglePerTimeRate(91, 20);

//                 // arm.moveToAngleAtAnglePerTimeRate(10, 20);

//                 // claw.moveToAngleAtAnglePerTimeRate(0, 1);

//                 // arm.moveToAngleAtAnglePerTimeRate(0, 20);

//                 // base.moveToAngleAtAnglePerTimeRate(50, 20);

//                 // lever.moveToAngleAtAnglePerTimeRate(90, 10);
//             }
//         }
//         catch (...)
//         {
//             cout << "Failure to run auto sequence" << endl;
//         }
//     }
// };
