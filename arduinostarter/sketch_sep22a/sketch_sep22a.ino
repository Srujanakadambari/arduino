// --Library-- / Bibliotheken
  #include <LiquidCrystal.h>
const int pingPin = 9; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 18; // Echo Pin of Ultrasonic Sensor
// LCD Display (PIN)(LCD1602 Module)
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
   // LCD Display
  lcd.begin(16, 2);
  lcd.setCursor(7,1);
  lcd.print("By Hilfe+");
  
// LCD Display (distance in cms and inches)
  lcd.setCursor(0,0);
  lcd.print("D in cms:");
  lcd.setCursor(0,1);
  lcd.print("D in inchs:");
  delay(1500);
}

void loop() {
    lcd.setCursor(12,1);
  lcd.print("%");
// Load (Arrow)
  delay(550);
  lcd.setCursor(13,0);
  lcd.print("<");
  delay(50);
  lcd.setCursor(14,0);
  lcd.print("-");
  delay(50);
  lcd.setCursor(15,0);
  lcd.print("-");
  delay(50);
  lcd.setCursor(15,1);
  lcd.print("-");
  delay(50);
  lcd.setCursor(14,1);
  lcd.print("-");
  delay(50);
  lcd.setCursor(13,1);
  lcd.print("<");

// ...
  lcd.setCursor(12,0);
  lcd.print(" ");
  
   long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
  // inches = microsecondsToInches(duration);
  // cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(2000);

 
      }
 // -- DISTANCE IN BOTH cms AND inches --
// DISTANCE= distance in cms and DISTANCE= distance in inches
//    float D = echopin. pulseIn duration in cms
  //  float D = echopin. pulseIn duration in inches
    
  

// Serial Monitor
  Serial.println("-  Result  -");
  Serial.print("D in cm:"); 
  Serial.println(D);
  Serial.print("D in inch:");
  Serial.println(D);
  Serial.println("- - -  - - -");
  Serial.println(" ");
  Serial.println(" ");
  

}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
