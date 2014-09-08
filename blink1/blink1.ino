/* 
  Blinks an LED pin 13 every half second
*/

int LEDPin =13;

void setup(){
  pinMode(LEDPin, OUTPUT); //set pin 13 to be an output
}

void loop(){
  digitalWrite(LEDPin, HIGH); //LED On
  delay(500);  //Wait half a second. Time is noted by milliseconds
  digitalWrite(LEDPin, LOW); //LED Off
  delay(1000);   
}

