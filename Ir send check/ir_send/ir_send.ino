#include <IRLibAll.h>

IRsend mySender;

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  int i;
  while(1)
  {
   i=digitalRead(2);
   if (i==0) 
   {
    mySender.send(RC6,0xc0000c, 24);
     Serial.println("Button pressed");
    digitalWrite(9,1);
    delay(1000);
   
   }
   else 
   {
    digitalWrite(9,0);
    }
   
   
   }
   
  }
