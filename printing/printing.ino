int count=0,wait=500;
String print_value="count = ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  count=count+1;
  Serial.print(print_value);
  Serial.println(count);
  delay(wait);

}
