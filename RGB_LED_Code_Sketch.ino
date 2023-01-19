const int  PIN_RED = 11;
const int PIN_BLUE = 10;
const int PIN_GREEN = 9;

void setup(){
  	pinMode(PIN_RED, OUTPUT);
    pinMode(PIN_GREEN, OUTPUT);
    pinMode(PIN_BLUE, OUTPUT);
}

void loop(){
  analogWrite(PIN_RED, 255);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE, 0);
  
  delay(1000); // Wait for 1 second
  
  
  analogWrite(PIN_RED, 0);
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE, 0);
  
  delay(1000); // Wait for 1 second
  
  analogWrite(PIN_RED, 0);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE, 255);
  
  delay(1000); // Wait for 1 second
}
  
  