int relay = 2;
int button = 3; 
bool sys = true; 

void setup() {
pinMode(relay,OUTPUT);
pinMode(button,INPUT_PULLUP);
digitalWrite(relay,HIGH);
}

void loop() {
if(digitalRead(button)==LOW){
  sys = !sys;
  delay(500);
  }

if(sys == true || sensorValue || otherArgument){ //in case of other inputs for turning the system on, it can be put here using || between the arguments. 
  digitalWrite(relay,HIGH);
  sys = true;
}

else if (sys == false) {
  digitalWrite(relay,LOW);
}
}
