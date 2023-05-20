#include<Servo.h>
int servo_pin=9,pot_pin=A0;
float pot_val=0,servo_pos=0;
Servo servo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(servo_pin);
  pinMode(pot_pin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val=analogRead(pot_pin);
  if(pot_val>=0 && pot_val<175){
    Serial.println("turn the knob more");
  }
  if(pot_val>=175 && pot_val<=882){
    pot_val=analogRead(pot_pin);
    servo_pos=(180./707.)*((pot_val)-175);
    Serial.print(pot_val);
    Serial.print(",");
    Serial.println(servo_pos);
    servo.write(servo_pos);
  }
  if(pot_val>882 && pot_val<=1023){
    Serial.println("turn the knob less");
  }
  

}
