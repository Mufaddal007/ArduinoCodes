int yellow1=9;
int yellow2=10;
int red=10;

void setup() 
{
      randomSeed(analogRead(0));
  
         pinMode(yellow1,OUTPUT);
       pinMode(yellow2,OUTPUT);
       pinMode(red,OUTPUT);

}

void loop() {
      randomSeed(analogRead(0));
      int randm=random(256);
      analogWrite(yellow1,randm);
      analogWrite(red,randm);
      analogWrite(yellow2,randm);
      delay(10);
      
      

}
