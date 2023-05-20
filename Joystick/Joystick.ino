int Xpin = A0, Ypin = A1, Spin = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);
  digitalWrite(Spin, 1);
}

int Xval, Yval, Sval;
void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(Xpin);
  Yval = analogRead(Ypin);
  Sval = digitalRead(Spin);
  Serial.print(Xval);
  Serial.print(",");
  Serial.print(Yval);
  Serial.print(",");
  Serial.println(Sval);
  delay(200); 
}
