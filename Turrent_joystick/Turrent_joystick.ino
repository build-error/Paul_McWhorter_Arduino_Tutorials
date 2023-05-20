#include<Servo.h>
Servo panServo;
Servo tiltServo;

int panServoPin = 5, tiltServoPin = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  panServo.attach(panServoPin);
  tiltServo.attach(tiltServoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!Serial.available()) {
    int pos = Serial.parseInt();
    panServo.write(pos);
    Serial.println(pos);
  }
}
