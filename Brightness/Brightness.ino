int led1=8,led2=9,led3=10,led4=11;
int short_pulse = 50;
int long_pulse = 700;
int pause = 1500;
int bright1=10,bright2=100,bright3=255;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led2,0);
  delay(short_pulse);
  analogWrite(led2,10);
  delay(short_pulse);
  analogWrite(led2,20);
  delay(short_pulse);
  analogWrite(led2,30);
  delay(short_pulse);
  analogWrite(led2,40);
  delay(short_pulse);
  analogWrite(led2,50);
  delay(short_pulse);
  analogWrite(led2,60);
  delay(short_pulse);
  analogWrite(led2,70);
  delay(short_pulse);
  analogWrite(led2,80);
  delay(short_pulse);
  analogWrite(led2,90);
  delay(short_pulse);
  analogWrite(led2,100);
  delay(short_pulse);
  analogWrite(led2,110);
  delay(short_pulse);
  analogWrite(led2,120);
  delay(short_pulse);
  analogWrite(led2,130);
  delay(short_pulse);
  analogWrite(led2,140);
  delay(short_pulse);
  analogWrite(led2,150);
  delay(short_pulse);
  analogWrite(led2,160);
  delay(short_pulse);
  analogWrite(led2,170);
  delay(short_pulse);
  analogWrite(led2,180);
  delay(short_pulse);
  analogWrite(led2,190);
  delay(short_pulse);
  analogWrite(led2,200);
  delay(short_pulse);
  analogWrite(led2,210);
  delay(short_pulse);
  analogWrite(led2,220);
  delay(short_pulse);
}
