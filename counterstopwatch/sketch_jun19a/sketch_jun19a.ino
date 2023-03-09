#include <LiquidCrystal.h>
LiquidCrystal mylcd(7,6,5,4,3,2);

int counter_sel=12,stopwatch_sel=11,reset1=10,stopwatch_led=9,counter_led=8;

void setup() 
{
    mylcd.begin(16,2);
    mylcd.setCursor(0,0);
    mylcd.print("Counter and ");
    mylcd.print("Stopwatch");
    delay(1000);
 
    pinMode(counter_sel,INPUT);
    pinMode(stopwatch_sel, INPUT);
    pinMode(reset1, INPUT);
    pinMode(counter_led,OUTPUT);
    pinMode(stopwatch_led, OUTPUT);
}

void loop() 
{     int state1=digitalRead(counter_sel);
      int state2=digitalRead(stopwatch_sel);
      if (state1==0) {delay(300); counter();  } // call counter function
      else if (state2==0) {delay(300); stopwatch(); } // call stopwatch function
      
}
void counter()
{     mylcd.clear();
      digitalWrite(counter_led,1);
      mylcd.setCursor(0,0);
      mylcd.print("Counter Mode :");
      short int i=0;
      while(1)
      {
        int rst=digitalRead(reset1);
	      if (rst==0) { delay(300); break;}
        int state1=digitalRead(counter_sel);
        if (state1==0) { i++; delay(200);}
        mylcd.setCursor(0,1);
        mylcd.print(i);
      }
      digitalWrite(counter_led,0);
}
void stopwatch()
{
      mylcd.clear();
      digitalWrite(stopwatch_led,1);
      long int ms=millis();
      byte sec=0, mins=0;
      mylcd.setCursor(0,0);
      mylcd.print("Stopwatch Mode : ");
      while(1)
      { 
        mylcd.setCursor(0,1);
        int state1=digitalRead(reset1);
        if (state1==0){delay(300); break; } 
	      if (sec==59) {mins++; sec=0;}
        if ((millis()-ms)>1000) {sec++; ms=millis(); }
        
        mylcd.print(mins);
        mylcd.setCursor(3,1);
        mylcd.print(":");
        mylcd.setCursor(5,1);
        mylcd.print(sec);
        mylcd.print(":");
        //mylcd.print(millis()-ms);
     } 
       digitalWrite(stopwatch_led,0); 
}
