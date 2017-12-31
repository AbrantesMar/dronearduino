#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int velocidade1 = 200;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  motor1.setSpeed(velocidade1);
  motor1.run(BACKWARD);
  //delay(5000);

  motor2.setSpeed(velocidade1);
  motor2.run(FORWARD);
  //delay(5000);
  
  motor3.setSpeed(velocidade1);
  motor3.run(BACKWARD);
  //delay(5000);
  
  motor4.setSpeed(velocidade1);
  motor4.run(FORWARD);
  //delay(5000);
}
