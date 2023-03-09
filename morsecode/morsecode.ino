int led=13;
void first()
{
  for(int i=0;i<3;i++)
  {
    digitalWrite(led,HIGH);
    delay(150);
    digitalWrite(led,LOW);
    delay(100);
   }
  }
void two()

{
  for(int i=0;i<3;i++)
  {
    digitalWrite(led,HIGH);
    delay(400);
    digitalWrite(led,LOW);
    delay(100);
   }
}  
void three()
{
  for(int i=0;i<3;i++)
  {
    digitalWrite(led,HIGH);
    delay(150);
    digitalWrite(led,LOW);
    delay(100);
   }
  
  
}  
  

void setup() 
{
pinMode(led,OUTPUT);
first();
two();
three();

}

void loop() {
 

}
