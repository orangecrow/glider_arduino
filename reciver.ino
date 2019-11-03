#include <Servo.h>

byte recv[2]; //Initialized variable to store recieved data
byte servo1;
byte servo2;

Servo pitch;
Servo yaw;
void setup() {
  pitch.attach(9);
  yaw.attach(10);// Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  {
    Serial.readBytes(recv,2); //Read the serial data and store in var
    servo1 = recv[0];
    servo2 = recv[1];
    pitch.write(servo1);
    yaw.write(servo2);
   }
   
  // send servo1 to servo
  // send servo2 to servo
  
}
