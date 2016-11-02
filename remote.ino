const int  buttonPinNext = A0;    
const int  buttonPinPrev = A1;   
const int ledPin = 5;

int buttonStatePrev = 0; 
int buttonStateNext = 0; 

void setup() {
  pinMode(buttonPinNext, INPUT);
  pinMode(buttonPinPrev, INPUT);
  Serial.begin(9600);
}


void loop() {
  buttonStateNext = digitalRead(buttonPinNext);
  if (buttonStateNext == HIGH) {
   Serial.println("next"); 
  }else {
    Serial.println("-"); 
  }
  
  buttonStatePrev = digitalRead(buttonPinPrev);
  if (buttonStatePrev == HIGH) {
   Serial.println("prev"); 
  }
  else {
    Serial.println("-"); 
  }
  
  delay(200);
}
