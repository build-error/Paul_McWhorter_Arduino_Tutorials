int led1=3,led2=5,led3=6,led4=9,led5=10,led6=11,wait=1000;
String input;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){
    }
  input=Serial.readString();
  Serial.println(input);
  if(input=="ready"){
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    }
  if(input=="steady"){
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    }
  if(input=="go"){
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,HIGH);
    }
}
