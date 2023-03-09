#include <SoftwareSerial.h>         // Include the SoftwareSerial Library 
char ch;
SoftwareSerial mySerial(10, 11);   // RX, TX ( Creates a new SoftwareSerial object )

void setup()
{
  Serial.begin(9600);                      //   Initialise the Serial port at 2400 baud.
                   //   Initialise the mySerial object at 2400 baud rate.

  Serial.write("fdfdgd0");  //   Send data through new TX ( Pin 11 ).
  delay(1000);
  while(1)
  {
    if(Serial.available())
    {
      ch=Serial.read();
      Serial.println(ch);
      delay(1000);
    }
  }
}

void loop()
{

}
