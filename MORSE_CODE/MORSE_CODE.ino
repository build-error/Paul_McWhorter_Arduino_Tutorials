int green_led = 6;
int short_pulse = 200;
int long_pulse = 700;
int pause = 1500;

void setup() {
  // put your setup code here, to run once:
  pinMode(green_led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green_led,HIGH);
  delay(short_pulse);
  digitalWrite(green_led,LOW);
  delay(short_pulse);
  digitalWrite(green_led,HIGH);
  delay(short_pulse);
  digitalWrite(green_led,LOW);
  delay(short_pulse);
  digitalWrite(green_led,HIGH);
  delay(short_pulse);
  digitalWrite(green_led,LOW);
  delay(short_pulse);


  digitalWrite(green_led,HIGH);
  delay(long_pulse);
  digitalWrite(green_led,LOW);
  delay(long_pulse);
  digitalWrite(green_led,HIGH);
  delay(long_pulse);
  digitalWrite(green_led,LOW);
  delay(long_pulse);
  digitalWrite(green_led,HIGH);
  delay(long_pulse);
  digitalWrite(green_led,LOW);
  delay(long_pulse);


  digitalWrite(green_led,HIGH);
  delay(short_pulse);
  digitalWrite(green_led,LOW);
  delay(short_pulse);
  digitalWrite(green_led,HIGH);
  delay(short_pulse);
  digitalWrite(green_led,LOW);
  delay(short_pulse);
  digitalWrite(green_led,HIGH);
  delay(short_pulse);
  digitalWrite(green_led,LOW);
  delay(short_pulse);

  delay(pause);

  

}
