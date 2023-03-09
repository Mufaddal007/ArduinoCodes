int red=11;
int yellow=12;
int green=13;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);

  for(int i=0;i<10;i++)
  {
    digitalWrite(red,0);
    digitalWrite(yellow,1);
    digitalWrite(green,1);
    delay(200);

    digitalWrite(red,0);
    digitalWrite(yellow,0);
    digitalWrite(green,0);
    delay(200);
    
    }
  
     for(int i=0;i<10;i++)
  {
    digitalWrite(red,1);
    digitalWrite(yellow,0);
    digitalWrite(green,1);
    delay(200);

    digitalWrite(red,0);
    digitalWrite(yellow,0);
    digitalWrite(green,0);
    delay(200);
    
    }

    for(int i=0;i<10;i++)
  {
    digitalWrite(red,1);
    digitalWrite(yellow,1);
    digitalWrite(green,0);
    delay(200);

    digitalWrite(red,0);
    digitalWrite(yellow,0);
    digitalWrite(green,0);
    delay(200);
    
    }

    for(int i=0;i<10;i++)
  {
    digitalWrite(red,1);
    digitalWrite(yellow,1);
    digitalWrite(green,1);
    delay(200);

    digitalWrite(red,0);
    digitalWrite(yellow,0);
    digitalWrite(green,0);
    delay(200);
    
    }

}

void loop() {
  // put your main code here, to run repeatedly:

}
