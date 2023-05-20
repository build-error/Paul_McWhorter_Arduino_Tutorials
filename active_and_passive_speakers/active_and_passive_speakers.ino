int read_pin=A0,wait=10,speaker=9;
float pot_val=0,loud=0,volt=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin,INPUT);
  pinMode(speaker,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val=analogRead(read_pin);
  loud=(255./1023.)*(pot_val);
  analogWrite(speaker,loud);
  Serial.println(loud);
  delay(wait);

}
