int bluePin=6,greenPin=5,redPin=3,read_pin=A0,wait=10,greenbutton=13,bluebutton=12,redbutton=8,red_led=9,blue_led=10,green_led=11,dt=100,pulse=100,count=0;
float redVal=0,blueVal=0,greenVal=0,pot_val=0,volt=0,bright=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(green_led,OUTPUT);
  pinMode(blue_led,OUTPUT);
  pinMode(red_led,OUTPUT);
  pinMode(read_pin,INPUT);
  pinMode(greenbutton,INPUT);
  pinMode(bluebutton,INPUT);
  pinMode(redbutton,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int green_button_initial=digitalRead(greenbutton);
  delay(dt);
  int green_button_final=digitalRead(greenbutton);
  delay(dt);
  if(green_button_initial==1 && green_button_final==0){
    while(digitalRead(greenbutton)==0){
      Serial.println("green");
      green_button_initial=digitalRead(greenbutton);
      delay(dt);
      green_button_final=digitalRead(greenbutton);
      if(green_button_initial==0 && green_button_final==1){
        break;
      }
      break;
    }
//    break;
  }
}
  
