int ldr_pin=A0;
float pot_val_ldr=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ldr_pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val_ldr=analogRead(ldr_pin);
  Serial.println(pot_val_ldr);
  delay(100);

}
