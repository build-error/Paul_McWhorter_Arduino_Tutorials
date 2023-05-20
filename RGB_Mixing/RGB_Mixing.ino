int bluePin=6,greenPin=5,redPin=3,read_pin=A0,wait=10;
float redVal=0,blueVal=0,greenVal=0,pot_val=0,volt=0,bright=0;
String input;
void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(read_pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){
    }
  input=Serial.readString();
  Serial.println(input);
  if(input=="green"){
    while(true){
      if(Serial.available()==0){
        pot_val=analogRead(read_pin);
        bright=(255./1023.)*(pot_val);
        analogWrite(greenPin,bright);
        Serial.print("green");
        Serial.print(",");
        Serial.println(bright);
        delay(wait);
      }
      if (Serial.available()!=0){
        input=Serial.readString();
        Serial.println(input);
      if(input=="ok"){
        break;
        }
      }
    }
  }
  if(input=="red"){
    while(true){
      pot_val=analogRead(read_pin);
      bright=(255./1023.)*(pot_val);
      analogWrite(redPin,bright);
      Serial.print("red");
      Serial.print(",");
      Serial.println(bright);
      delay(wait);

      if (Serial.available()!=0){
      input=Serial.readString();
      Serial.println(input);
      if(input=="ok"){
        break;
        }
       }
      }
    }
  if(input=="blue"){
    while(true){
      pot_val=analogRead(read_pin);
      bright=(255./1023.)*(pot_val);
      analogWrite(bluePin,bright);
      Serial.print("blue");
      Serial.print(",");
      Serial.println(bright);
      delay(wait);

      if (Serial.available()!=0){
      input=Serial.readString();
      Serial.println(input);
      if(input=="ok"){
        break;
        }
      }
     }
    }
}
