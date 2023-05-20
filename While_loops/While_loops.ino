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
  pinMode(read_pin,INPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  while(volt<=1 && volt>=0){
    pot_val=analogRead(read_pin);
    volt=(5./1023.)*(pot_val);
    bright=(255./1023.)*(pot_val);
    analogWrite(led2,0);
    analogWrite(led3,0);
    analogWrite(led4,0);
    analogWrite(led5,0);
    analogWrite(led1,bright);
    Serial.print(volt);
    Serial.print(",");
    Serial.println(bright);   

    }
  while(volt<=2 && volt>=1){
    pot_val=analogRead(read_pin);
    volt=(5./1023.)*(pot_val);
    bright=(255./1023.)*(pot_val);
    analogWrite(led1,0);
    analogWrite(led3,0);
    analogWrite(led4,0);
    analogWrite(led5,0);
    analogWrite(led2,bright);
    Serial.print(volt);
    Serial.print(",");
    Serial.println(bright);   

    }
  while(volt<=3 && volt>=2){
    pot_val=analogRead(read_pin);
    volt=(5./1023.)*(pot_val);
    bright=(255./1023.)*(pot_val);
    analogWrite(led1,0);
    analogWrite(led2,0);
    analogWrite(led4,0);
    analogWrite(led5,0);
    analogWrite(led3,bright);
    Serial.print(volt);
    Serial.print(",");
    Serial.println(bright);   

    }
  while(volt<=4 && volt>=3){
    pot_val=analogRead(read_pin);
    volt=(5./1023.)*(pot_val);
    bright=(255./1023.)*(pot_val);
    analogWrite(led1,0);
    analogWrite(led2,0);
    analogWrite(led3,0);
    analogWrite(led5,0);
    analogWrite(led4,bright);
    Serial.print(volt);
    Serial.print(",");
    Serial.println(bright);   

    }
  while(volt<=5 && volt>=4){
    pot_val=analogRead(read_pin);
    volt=(5./1023.)*(pot_val);
    bright=(255./1023.)*(pot_val);
    analogWrite(led1,0);
    analogWrite(led2,0);
    analogWrite(led3,0);
    analogWrite(led4,0);
    analogWrite(led5,bright);
    Serial.print(volt);
    Serial.print(",");
    Serial.println(bright);   

    }
    
  }
