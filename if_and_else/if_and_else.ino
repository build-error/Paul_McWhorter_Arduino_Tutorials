float pot_value=0,volt=0;
int read_pin=A0,wait=10,led1=3,led2=4,led3=5,led4=6,led5=7,green_pin=8,pulse=100;
void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(green_pin,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(green_pin,LOW);
  pot_value=analogRead(read_pin);
  volt=(5./1023.)*pot_value;
  Serial.println(volt);
  if(0<volt && volt<=1){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    }
  if(1<volt && volt<=2){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    }
  if(2<volt && volt<=3){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    }
  if(3<volt && volt<=4){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
    }
  if(4<volt && volt<=5){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    }
  if(volt>4.00 || volt<3.00){
    digitalWrite(green_pin,HIGH);
    delay(pulse);
    digitalWrite(green_pin,LOW);
    delay(pulse);}
  else{
    }         
  delay(wait);

}
