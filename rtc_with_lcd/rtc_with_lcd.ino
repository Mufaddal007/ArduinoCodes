#include <LiquidCrystal.h>
#include <Wire.h>
#include "RTClib.h"
RTC_DS3231 myrtc;

char moy[13][4]={" ","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
LiquidCrystal mylcd(2,3,4,5,6,7);
char dow[7][4]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
void setup() {
  Serial.begin(9600);
  mylcd.begin(16,2);
 if (!myrtc.begin())
 {
  Serial.println("couldn/t find rtc");
  }

   
  myrtc.adjust(DateTime(F(__DATE__),F(__TIME__)));


}

void loop() {
  mylcd.clear();
  DateTime now=myrtc.now();
  mylcd.print("D=");
  
  Serial.print(now.day());
  mylcd.print(now.day());
  mylcd.print('-');

  Serial.print(now.month());
  mylcd.print(moy[now.month()]);
  mylcd.print('-');

  Serial.print(now.year());
  mylcd.print(now.year());
  

 
  mylcd.setCursor(0,1);
  mylcd.print("T=");
  int hr=now.hour();
  if (hr>12)
  {
  mylcd.print(hr-12);
  
   
    }
  else if (hr<=12)
   
   {
    mylcd.print(hr);
   
   }
  
  mylcd.print(':');
  mylcd.print(now.minute());
  mylcd.print(':');
  mylcd.print(now.second());
  mylcd.print(" ");
  if (hr<12)
  {
    mylcd.print("AM ");
    }
    else if (hr>12)
    {
      mylcd.print("PM ");
      }
   mylcd.setCursor(13,1);
  mylcd.print(dow[now.dayOfTheWeek()]);
  Serial.print(dow[now.dayOfTheWeek()]);
  delay(1000);
  

}
