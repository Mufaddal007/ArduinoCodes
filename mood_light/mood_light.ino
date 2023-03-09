int led1=11;
int led2=12;
int led3=13;

void setup() 
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
   
}

void loop() 

{
  
  for (int i=0;i<255;i+=10)
  {
    analogWrite(led1,i);
    delay(40);
      for (int i=0;i<255;i+=10)
      {
        analogWrite(led2,i);
         delay(40);
          for(int i=0;i<255;i+=10)
          {
             analogWrite(led3,i);
             delay(40);
            
            }
        
        }
    
    }
  
  
  
  }
  
