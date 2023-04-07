// Homebrew PCB Shaker For Etching Using Old DVD Rom
// Evtech | @earldanielph
// beacons.page/evtech

#include <AFMotor.h>

AF_DCMotor motor(3);


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor.setSpeed(500);
  motor.run(FORWARD);
  delay (400);
  motor.run(BACKWARD);
  delay (400);

}
