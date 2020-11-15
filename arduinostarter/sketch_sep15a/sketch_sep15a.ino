/* This code is developed by Srujana Kadambari
 *  This projects aims to Turn On different LED's depending on the current state and previous state of provided touch sensor in to consideration 
 *  on Any questions regarding the project you can contact me on srujanakadambari97@gmail.com
 */


// constants won't change. They're used here to set pin numbers:
const int SENSOR_PIN = 7; // the Arduino's input pin that connects to the sensor's SIGNAL pin 

// Variables will change:
int lastState = LOW;      // the previous state from the input pin
int currentState;
int currentState1;
int currentState2;
// the current reading from the input pin
void setup() {
 // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the Arduino's pin as aninput
  pinMode(SENSOR_PIN, INPUT);
  // declare the LED pins as outputs
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // declare the touch sensor as an input
 // pinMode(7, INPUT);
}

void loop() {

  // read the value of the switch
  // digitalRead() checks to see if there is voltage on the pin or not
 // lastState = digitalRead(7);
 currentState = digitalRead(7);

  // if the button is not pressed turn on the green LED and off the red LEDs
  if(lastState == LOW && currentState == HIGH) {
    digitalWrite(3, HIGH); // turn the green LED on pin 3 on
    digitalWrite(4, LOW);  // turn the blue LED on pin 4 off
    digitalWrite(5, LOW);  // turn the red LED on pin 5 off
   delay(2000);
   currentState == LOW;
   digitalWrite(3, LOW);
   }else if(currentState == LOW){
    currentState1 = digitalRead(7);
    if(currentState1 == HIGH && currentState == LOW) {
   }
    digitalWrite(3, LOW);  // turn the green LED on pin 3 off
    digitalWrite(4, HIGH);  // turn the blue LED on pin 4 on
    digitalWrite(5, LOW); // turn the red LED on pin 5 off
    // wait for a quarter second before changing the light
    delay(2000);
    currentState1 == LOW;
    currentState2 == LOW;
   digitalWrite(4, LOW);
  }
  // this else is part of the above if() statement.
  // if the switch is not LOW (the button is pressed) turn off the green LED and
  // blink alternatively the red LEDs
  
  
 /* currentState2 = digitalRead(7);
    if(currentState2 == HIGH && currentState1== LOW) {
     digitalWrite(3, LOW); // turn the green LED on pin 3 off
    digitalWrite(4, LOW); // turn the red LED on pin 4 off
    digitalWrite(5, HIGH);  // turn the red LED on pin 5 on
    // wait for a quarter second before changing the light
    delay(2000);
  }*/
}
