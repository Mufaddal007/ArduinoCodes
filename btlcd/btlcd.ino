#include <LiquidCrystal.h>


LiquidCrystal mylcd(2,3,4,5,6,7);
void setup() {
  mylcd.begin(16,2);
  Serial.begin(9600);
 
 }

void loop() {
  char rd;
  
 if (Serial.available())
 {
   mylcd.clear();
  int i=0;
   int j=0;
       while(Serial.available())
     {
  
          rd=Serial.read();
         if (i>15)
         {
          j+=1;
          i=0;
          }  
         if (j==2)
         {
           j=0;
         }
          mylcd.setCursor(i,j);
          
          Serial.println(rd);
           mylcd.print(rd);
          delay(50);
           i++;
      }
 }
}
