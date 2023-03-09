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
    delay(40);
    digitalWrite(leds[i],0);
    delay(40);
    
    }

    for(int i=10;i>=0;i--)
    
    {
      digitalWrite(leds[i],HIGH);
      delay(40);
      digitalWrite(leds[i],LOW);
      delay(40);
      
      }

}
