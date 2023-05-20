#include<math.h>
int latch_pin=11,clock_pin=9,data_pin=12,wait=1000;
byte input_byte=0b10110101;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latch_pin,OUTPUT);
  pinMode(data_pin,OUTPUT);
  pinMode(clock_pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latch_pin,LOW);
  shiftOut(data_pin,clock_pin,LSBFIRST,input_byte);
  digitalWrite(latch_pin,HIGH);
  Serial.print(input_byte,DEC);
  Serial.print(",");
  Serial.print(input_byte,BIN);
  Serial.print(",");
  Serial.println(input_byte,HEX);
  input_byte=floor(input_byte/2);        //'*'=logical shift right
  delay(wait);                           //'/'=logical shift left
 }
