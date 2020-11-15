// constants won't change. They're used here to set pin numbers:
const int SENSOR_PIN = 7; // the Arduino's input pin that connects to the sensor's SIGNAL pin 

// Variables will change:
int lastState = LOW;      // the previous state from the input pin
int currentState;         // the current reading from the input pin
int currentState1;        // the current reading from the input pin
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the Arduino's pin as aninput
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  // Ask the user to touch the sensor:
 // read the state of the the input pin:
  currentState = digitalRead(SENSOR_PIN);
  delay(1000);
  currentState1 = digitalRead

 if(lastState == LOW && currentState == HIGH)
    Serial.println("Di-dit, di-dah-di-dit dah-dah-dah di-di-di-dah dit, dah-di-dah-dah dah-dah-dah di-di-dah");
    delay(1000); 
 
 if(lastState == HIGH && currentState == HIGH)
    Serial.println("chay garu");
    delay(1000);

 if(lastState == HIGH && currentState == LOW)
    Serial.println("muha♥♥♥");  

 /* if(lastState == HIGH && currentState == HIGH)
    Serial.println("Please leave the sensor");
// save the the last state*/
  lastState = currentState;
}
