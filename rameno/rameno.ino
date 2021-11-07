#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;


int pos1[3] = {0, 70, 120};
int pos2[3] = {180, 110, 170}; // variable to store the servo position

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);// attaches the servo on pin 9 to the servo object
}

void loop() {

  servo1.write(pos1[0]);
  servo2.write(pos1[1]);
  servo3.write(pos1[2]);
  delay(2000);
  servo1.write(pos2[0]);
  servo2.write(pos2[1]);
  servo3.write(pos2[2]);// tell servo to go to position in variable 'pos'
  delay(2000);                       // waits 15ms for the servo to reach the position

}
