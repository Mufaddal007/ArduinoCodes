#include <LiquidCrystal.h>


void setup() {
 pinMode(8,INPUT);
 pinMode(9, OUTPUT);
 
 Serial.begin(9600);
 
}

void loop() {
  int i=0;
 while(1)
 {
    i=digitalRead(8);
    if (i==0) 
    {
    Serial.println("Button pressed");
    digitalWrite(9,1);
    delay(1000);
  }
   else
   {
    digitalWrite(9, 0);
    }
  
  }

}
