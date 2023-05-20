int pull_up_button=2,pull_down_button=3,led1=4,led2=5,
    pull_up_val,pull_down_val,wait=100;
void setup() {
  // put your setup code here, to run once:
  pinMode(pull_down_button,INPUT);
  pinMode(pull_up_button,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  pull_up_val=digitalRead(pull_up_button);
  Serial.print(pull_up_val);
  digitalWrite(led1,pull_up_val);
  Serial.print(",");
  pull_down_val=digitalRead(pull_down_button);
  Serial.println(pull_down_val);
  digitalWrite(led2,pull_down_val);
  delay(wait);
}
