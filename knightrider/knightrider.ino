int leds[]={4,5,6,7,8,9,10,11,12,13};
void setup() {
  for(int i=0;i<10;i++)
  {
    pinMode(leds[i],OUTPUT);
    
    }

}

void loop() {
    
   for(int i=0;i<10;i++)
   {
    digitalWrite(leds[i],1);
    digitalWrite(leds[i+1],1);
    digitalWrite(leds[i+2],1);
    delay(50);
     
     
    digitalWrite(leds[i],0);
    digitalWrite(leds[i+1],0);
    digitalWrite(leds[i+2],0);
     delay(50);
    
    }
   
     for(int i=10;i>=0;i--)
   {
    digitalWrite(leds[i],1);
    digitalWrite(leds[i+1],1);
    digitalWrite(leds[i+2],1);
    delay(50);
     
     
    digitalWrite(leds[i],0);
    digitalWrite(leds[i+1],0);
    digitalWrite(leds[i+2],0);
     delay(50);
    
    }
   

}
