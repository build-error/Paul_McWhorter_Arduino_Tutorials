int pull_down_button=3,led1=4,pull_down_val_initial,
    pull_down_val_final,wait=10,led1_state=0;
    
void setup() {
  // put your setup code here, to run once:
  pinMode(pull_down_button,INPUT);
  pinMode(led1,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  pull_down_val_initial=digitalRead(pull_down_button);
  delay(wait);
  pull_down_val_final=digitalRead(pull_down_button);
  if(pull_down_val_initial==1 && pull_down_val_final==0){
    if(led1_state==0){
     digitalWrite(led1,HIGH);
     led1_state=1;
     Serial.println("ON"); 
    }
    else{
      digitalWrite(led1,LOW);
      led1_state=0;
      Serial.println("OFF");
    }
   pull_down_val_initial=pull_down_val_final=0;
  }
}
