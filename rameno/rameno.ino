#include <Servo.h>
#include <Arduino.h>
#define POSITIONS '5'
#define SERVOS '4'

Servo servo[SERVOS];

int pins[4] = {2, 3, 4, 5};
int maxposition[SERVOS][2] = {{0, 180}, {70, 110}, {120, 170}, {0, 180}};
int position[SERVOS][POSITIONS];



void setup()
{
  for (int i = 0; i < SERVOS; i++)
  {
    servo[i].attach(pins[i]);
  }
  Serial.begin(9600);
}

void loop()
{
  for (int j = 0; j < POSITIONS; j++)
  {
    for (int i = 0; i < SERVOS; i++)
    {
      if (maxposition[i][0] < position[i][j] < maxposition[i][1])
      {
        servo[i].write(position[i][j]);
      }
    }
  }
}

