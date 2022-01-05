#include <Servo.h>
#include <Arduino.h>
//Počet servo motorů.
#define SERVOS 4
//Počet pozic, kterýma rameno projde.
#define POSITIONS 8
//Definování objektů typu servo.
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

//Piny na které jsou serva připojeny.
int pins[4] = {2, 3, 4, 5};
int position[SERVOS][POSITIONS] = {{45, 45, 60, 60, 90, 90, 60, 60}, {116, 116, 85, 85, 85, 85, 85, 85}, {123, 123, 150, 175, 175, 175, 175, 140}, {30, 10, 10, 10, 10, 30, 30, 30}};

void setup() {
  attachInterrupt(digitalPinToInterrupt(18), sleep, LOW);
  //Přiřazení objektů k digitálním výstupním pinům.
  servo1.attach(pins[0]);
  servo2.attach(pins[1]);
  servo3.attach(pins[2]);
  servo4.attach(pins[3]);
}

//pozastavení práce ramena
void sleep() {
  delay(10);
}


void loop() {
  //Cyklus for, který při každém průběhu nastaví jednotlivé hodnoty serv na hodnoty pro danou polohu ramena. Cyklus proběhne tolikrát, kolik je nastaveno v proměnné POSITIONS.
  for (int i = 0; i < POSITIONS; i++) {
    servo1.write(position[0][i]);
    delay(20);
    servo2.write(position[1][i]);
    delay(20);
    servo3.write(position[2][i]);
    delay(20);
    servo4.write(position[3][i]);
    delay(350);
  }
}
