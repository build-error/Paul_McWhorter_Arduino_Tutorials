#include <math.h>
int latch_pin=11,clock_pin=9,data_pin=12,count=1,read_pin=A0;
float pot_value=0,wait=0;
byte input_byte=0b00000001;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latch_pin,OUTPUT);
  pinMode(data_pin,OUTPUT);
  pinMode(clock_pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(count=1;count<=7;count++){
    pot_value=analogRead(read_pin);
    wait=(500./1023.)*pot_value;        
    digitalWrite(latch_pin,LOW);
    shiftOut(data_pin,clock_pin,LSBFIRST,input_byte);
    digitalWrite(latch_pin,HIGH);
    Serial.print(input_byte,DEC);
    Serial.print(",");
    Serial.print(input_byte,BIN);
    Serial.print(",");
    Serial.print(input_byte,HEX);
    Serial.print(",");
    Serial.println(wait);
    input_byte=floor(input_byte/128)+input_byte*2; 
    delay(wait);    
  }
  for(count=1;count<=7;count++){
    pot_value=analogRead(read_pin);
    wait=(500./1023.)*pot_value;
    digitalWrite(latch_pin,LOW);
    shiftOut(data_pin,clock_pin,LSBFIRST,input_byte);
    digitalWrite(latch_pin,HIGH);
    Serial.print(input_byte,DEC);
    Serial.print(",");
    Serial.print(input_byte,BIN);
    Serial.print(",");
    Serial.print(input_byte,HEX);
    Serial.print(",");
    Serial.println(wait);
    input_byte=floor(input_byte*128)+input_byte/2;                
    delay(wait);
  }              
 }
