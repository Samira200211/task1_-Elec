# task1_-Elec
Sure, here's an example of how to move 6 servo motors using code:
// Include necessary library
#include <Servo.h>

// Define variables for the servo motors
Servo servo1, servo2, servo3, servo4, servo5, servo6;

// Define the pins for each servo motor
int servo1_pin = 2;
int servo2_pin = 3;
int servo3_pin = 4;
int servo4_pin = 5;
int servo5_pin = 6;
int servo6_pin = 7;

void setup() {
  // Attach the servo motors to their respective pins
  servo1.attach(servo1_pin);
  servo2.attach(servo2_pin);
  servo3.attach(servo3_pin);
  servo4.attach(servo4_pin);
  servo5.attach(servo5_pin);
  servo6.attach(servo6_pin);
}

void loop() {
  // Move the servo motors to different positions
  moveServos(0, 30, 60, 90, 120, 150); // Move to these positions
  delay(1000); // Wait for 1 second

  moveServos(180, 150, 120, 90, 60, 30); // Move to these positions
  delay(1000); // Wait for 1 second
}

void moveServos(int pos1, int pos2, int pos3, int pos4, int pos5, int pos6) {
  // Move each servo motor to the specified position
  servo1.write(pos1);
  servo2.write(pos2);
  servo3.write(pos3);
  servo4.write(pos4);
  servo5.write(pos5);
  servo6.write(pos6);
}

Here's how the code works:

1. The Servo.h library is included to provide the necessary functions for controlling the servo motors.
2. Six Servo objects are defined to represent the six servo motors.
3. The pins for each servo motor are defined using integer variables.
4. In the setup() function, the servo motors are attached to their respective pins using the attach() function.
5. In the loop() function:
   - The moveServos() function is called to move the servo motors to different positions.
   - The servo motors are moved to the positions specified by the function arguments (`pos1`, pos2, pos3, pos4, pos5, `pos6`).
   - The program waits for 1 second before moving the servo motors to the next set of positions.
6. The moveServos() function is defined to move each servo motor to the specified position using the write() function.

You can modify the positions passed to the moveServos() function to control the movement of the servo motors as desired. This code provides a basic example of how to move 6 servo motors using an Arduino-based system.
