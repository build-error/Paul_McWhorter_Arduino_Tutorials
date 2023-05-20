float volt_value=0,read_pin=A0,read_pin_value=0;
int wait=100;
void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  read_pin_value=analogRead(read_pin);
  volt_value=(5./1023.)*(read_pin_value);
  Serial.println(volt_value);
  delay(wait);
 
}
