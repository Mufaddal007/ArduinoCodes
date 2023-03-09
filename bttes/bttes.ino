#include <SoftwareSerial.h>         // Include the SoftwareSerial Library 

SoftwareSerial mySerial(10, 11);   // RX, TX ( Creates a new SoftwareSerial object )

void setup()
{
  Serial.begin(9600);                      //   Initialise the Serial port at 2400 baud.
  mySerial.begin(9600);                 //   Initialise the mySerial object at 2400 baud rate.

  mySerial.write("Send from inbuilt TX to new RX");  //   Send data through new TX ( Pin 1 ).
  delay(1000);
  while(1)
  {
    if(Serial.available())
    {
      Serial.write(Serial.read());
    }
  }
  
}

void loop()
{
 
}
