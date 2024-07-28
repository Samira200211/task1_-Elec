
#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6;
int servo1_pin = 2, servo2_pin = 3, servo3_pin = 4, servo4_pin = 5, servo5_pin = 6, servo6_pin = 7;

void setup() {
  servo1.attach(servo1_pin);
  servo2.attach(servo2_pin);
  servo3.attach(servo3_pin);
  servo4.attach(servo4_pin);
  servo5.attach(servo5_pin);
  servo6.attach(servo6_pin);
}

void loop() {
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);
  servo6.write(180);
  delay(1000);

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  delay(1000);
}

