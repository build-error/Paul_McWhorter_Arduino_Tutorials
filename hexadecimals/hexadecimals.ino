byte input_byte=0x0;  //input_byte= 0 or B00000000 or 0x0
int wait=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(input_byte,DEC);
  Serial.print(",");
  Serial.print(input_byte,BIN);
  Serial.print(",");
  Serial.println(input_byte,HEX);
  input_byte++;
  delay(wait);

}
