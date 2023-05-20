int button_up=3,button_down=4,led1=5,led2=6,pulse=100,wait=500,
    button_up_val,button_down_val,bright=0,led_state=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button_up,INPUT);
  pinMode(button_down,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_up_val=digitalRead(button_up);
  if(button_up_val==1){
    bright=bright+5;
    analogWrite(led1,bright);
    Serial.println(bright);
    delay(wait);
   }

  button_down_val=digitalRead(button_down);
  if(button_down_val==1){
    bright=bright-5;
    analogWrite(led1,bright);
    Serial.println(bright);
    delay(wait);
  }

  if(bright>=250){
    digitalWrite(led2,HIGH);
    delay(pulse);
    digitalWrite(led2,LOW);
    bright=250;
  }
  if(bright<=0){
    digitalWrite(led2,HIGH);
    delay(pulse);
    digitalWrite(led2,LOW);
    bright=5;
  }
  else{
    //do nothing
  }
}
