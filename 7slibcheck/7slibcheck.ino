#include "SevSeg.h"

SevSeg mydis;

void setup()

{
  int disType=COMMON_CATHODE;
  int cat=2;

  int a=3;
  int b=4;
  int c=5;
  int d=6;
  int e=7;
  int f=8;
  int g=9;
  int dp=10;
  int dig=1;
  mydis.Begin(disType,dig,cat,0,0,0,a,b,c,d,e,f,g,dp);
   
  }

  void loop()
  
 {
 for(int i=0;i<10;i++){
  delay(1000);
  mydis.DisplayString(i,0);
 
 }
 
  }
