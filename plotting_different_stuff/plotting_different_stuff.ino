#include <math.h>
int trig_pin=2,echo_pin=3,trig_time=10,wait=50,ldr_pin=A0;
float ping_travel_time=0,distance=0,speed_sound=34300.00,ldr_val=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(ldr_pin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(trig_time);
  digitalWrite(trig_pin,HIGH);
  delayMicroseconds(trig_time);
  digitalWrite(trig_pin,LOW);
  ping_travel_time=pulseIn(echo_pin,HIGH);
  distance=((ping_travel_time)*(pow(10,-6))*(speed_sound))/2;
  ldr_val=analogRead(ldr_pin);
  Serial.print(distance);
  Serial.print(",");
  Serial.println(ldr_val);
  delay(wait);
}
