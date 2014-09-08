/* 
  Remembering how to make comments this is a block comment
  Simple Serial
  Listens for an incoming serial byte. Adds one to the byte
  and send the result out serially
  Also blinks an LED pin 13 every half second
*/

int LEDPin =13; //Digital O Pin 13
int inByte = 0; //holds incoming data
long blinkTimer = 0; // keeps track of how long since the LED was last turned off

int blinkInterval = 1000; //a full second from on to off 

void setup(){
    pinMode(LEDPin, OUTPUT); //set pin 13 to be an output
    Serial.begin(9600); //configuring the serial port for 9600 bps, data/baud rate
}

void loop(){
   //if there are any incoming serial bytes available to read:
   if (Serial.available() > 0) {
   //then read the first available byte:
   inByte = Serial.read();   
  //and add one to it. then send the result out:
  Serial.write(inByte+1);
   }
   
   //Keep blinking the LED
   if (millis() - blinkTimer >= blinkInterval/2){
     digitalWrite(LEDPin, HIGH); //LED ON 
   }
   if (millis() - blinkTimer >= blinkInterval){
     digitalWrite(LEDPin, LOW); //LED Off
     blinkTimer = millis(); 
   }
}

