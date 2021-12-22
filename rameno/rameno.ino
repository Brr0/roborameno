#include <Servo.h>
#include <Arduino.h>
#define SERVOS 4
#define POSITIONS 8
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pins[4] = {2, 3, 4, 5};
int position[SERVOS][POSITIONS] = {{45, 45, 60, 60, 90, 90, 60, 60}, {116, 116, 85, 85, 85, 85, 85, 85}, {123, 123, 150, 175, 175, 175, 175, 140}, {30, 10, 10, 10, 10, 30, 30, 30}};

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
}
void loop() {

  for (int i = 0; i < POSITIONS; i++) {
    servo1.write(position[0][i]);
    delay(20);
    servo2.write(position[1][i]);
    delay(20);
    servo3.write(position[2][i]);
    delay(20);
    servo4.write(position[3][i]);
    delay(200);
  }
}
