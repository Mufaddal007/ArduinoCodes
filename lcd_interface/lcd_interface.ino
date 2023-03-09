/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int steps[]={6,7,8,9};
int i=0;
int scnt=0;
void rstep()
{
  
  if(i==4)
    {
    i=0;
    }
   else 
   {
      digitalWrite(steps[i],1);
      lcd.setCursor(0,0);
      lcd.print(steps[i]);
      scnt+=1
      i++;
      delay(500);
      lcd.clear();
    }
}
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  for(int i=0;i<4;i++)
  {
    pinMode(steps[i],OUTPUT);
    }
  
}

void loop() {
  while (1)
  {
    int rd=analogRead(A0);
    Serial.println(rd);
    lcd.print(rd);
    while(rd<200)
    {
      rd=analogRead(A0);
      rstep();
      lcd.setCursor(0,1);
      lcd.print("Rotate stepper");
     
      delay(500);
      lcd.clear();
      }
    delay(1000);
    lcd.clear();
    }
  lcd.setCursor(0, 0);
 lcd.print("check");
 delay(2000);
 lcd.clear();
 lcd.print("check1");
 delay(2000);
 lcd.clear();
  
 lcd.print("check2");
 lcd.setCursor(0,1);
 lcd.print("check3");
 delay(4000);
 lcd.clear();
 


  

}
