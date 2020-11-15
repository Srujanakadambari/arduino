#include<IRremote.h>
int IRpin = 11;
decode_results results;
void setup()
{
      Serial.begin(9600);
      irrecv.enableIRIn(); // start teh receiver
     }
 void loop()
 { 
  if (irrecv. decode(&results))
  {
    Serial.print(results.value, DEC);
    irrecv.resume();
  }
 }
