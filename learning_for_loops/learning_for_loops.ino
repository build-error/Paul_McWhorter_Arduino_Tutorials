int led1=3,led2=5,led3=6,led4=9,led5=10,led6=11,read_pin=A0,wait=10;
float pot_val=0,bright=0,volt=0;                     
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(bright=0;bright<=255;bright++){
    analogWrite(led1,bright);
    delay(wait);
    }
  for(bright=255;bright>=0;bright--){
    analogWrite(led1,bright);
    analogWrite(led2,255-bright);
    delay(wait);
    }
  for(bright=255;bright>=0;bright--){
    analogWrite(led2,bright);
    analogWrite(led3,255-bright);
    delay(wait);
    }
  for(bright=255;bright>=0;bright--){
    analogWrite(led3,bright);
    analogWrite(led4,255-bright);
    delay(wait);
    }
  for(bright=255;bright>=0;bright--){
    analogWrite(led4,bright);
    analogWrite(led5,255-bright);
    delay(wait);
    }
  for(bright=255;bright>=0;bright--){
    analogWrite(led5,bright);
    analogWrite(led6,255-bright);
    delay(wait);
    }
  for(bright=255;bright>=0;bright--){
    analogWrite(led6,bright);
    delay(wait);
    }
  Serial.println(bright);
  //delay(wait);
}
