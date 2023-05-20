int led1=8,led2=9,led3=10,led4=11;
int short_pulse = 200;
int long_pulse = 700;
int pause = 1500;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  digitalWrite(led1,HIGH);
  delay(short_pulse);
  digitalWrite(led2,HIGH);
  delay(short_pulse);
  digitalWrite(led3,HIGH);
  delay(short_pulse);
  digitalWrite(led4,HIGH);
  delay(pause);

  //0:
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(long_pulse);

  //1:
  digitalWrite(led4,HIGH);
  delay(pause);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(long_pulse);

  //2:
  digitalWrite(led3,HIGH);
  delay(pause);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(long_pulse);

  //3:
  digitalWrite(led4,HIGH);
  digitalWrite(led3,HIGH);
  delay(pause);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(long_pulse);

  //4:
  digitalWrite(led2,HIGH);
  delay(pause);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(long_pulse);

  //5:
  digitalWrite(led2,HIGH);
  digitalWrite(led4,HIGH);
  delay(pause);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(long_pulse);

  //6:
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(pause);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(long_pulse);
 }
