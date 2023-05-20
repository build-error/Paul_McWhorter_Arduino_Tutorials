float pot_value=0,volt=0;
int read_pin=A0,wait=100;
void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  pot_value=analogRead(read_pin);
  volt=(5./1023.)*pot_value;
  Serial.println(volt);
  delay(wait);

}
