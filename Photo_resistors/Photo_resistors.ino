int bluePin=6,greenPin=5,redPin=3,led=10,read_pin=A1,ldr=A0,wait=100;
float redVal=0,blueVal=0,greenVal=0,pot_val=0,pot_val_ldr=0,volt=0,bright=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(read_pin,INPUT);
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val=analogRead(read_pin);
  bright=(255./1023.)*(pot_val);
  analogWrite(led,bright);

  
  pot_val_ldr=analogRead(ldr);
  greenVal=(255./1023.)*(ldr);
  analogWrite(greenPin,greenVal);
  Serial.print(bright);
  Serial.print(",");
  Serial.print(ldr);
  Serial.print(",");
  Serial.println(greenVal);
  delay(wait);
  
  

}
