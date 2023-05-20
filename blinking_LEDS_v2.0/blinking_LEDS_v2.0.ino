int green_led = 8;
int yellow_led = 9;
int red_led = 10;
int short_pulse = 100;
int long_pulse = 500;
int pause = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(green_led,OUTPUT);
  pinMode(yellow_led,OUTPUT);
  pinMode(red_led,OUTPUT);

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
  delay(short_pulse);
  digitalWrite(green_led,LOW);
  delay(short_pulse);
  digitalWrite(green_led,HIGH);
  delay(short_pulse);
  digitalWrite(green_led,LOW);
 
  delay(pause);

  digitalWrite(yellow_led,HIGH);
  delay(long_pulse);
  digitalWrite(yellow_led,LOW);
  delay(long_pulse);
  digitalWrite(yellow_led,HIGH);
  delay(long_pulse);
  digitalWrite(yellow_led,LOW);
  delay(long_pulse);
  digitalWrite(yellow_led,HIGH);
  delay(long_pulse);
  digitalWrite(yellow_led,LOW);
  delay(long_pulse);
  digitalWrite(yellow_led,HIGH);
  delay(long_pulse);
  digitalWrite(yellow_led,LOW);
  delay(long_pulse);
  digitalWrite(yellow_led,HIGH);
  delay(long_pulse);
  digitalWrite(yellow_led,LOW);
  
  delay(pause);

  digitalWrite(red_led,HIGH);
  delay(short_pulse);
  digitalWrite(red_led,LOW);
  delay(long_pulse);
  digitalWrite(red_led,HIGH);
  delay(short_pulse);
  digitalWrite(red_led,LOW);
  delay(long_pulse);
  digitalWrite(red_led,HIGH);
  delay(short_pulse);
  digitalWrite(red_led,LOW);
  delay(long_pulse);
  digitalWrite(red_led,HIGH);
  delay(short_pulse);
  digitalWrite(red_led,LOW);
  delay(long_pulse);
  digitalWrite(red_led,HIGH);
  delay(short_pulse);
  digitalWrite(red_led,LOW);
  
  delay(pause);

}
