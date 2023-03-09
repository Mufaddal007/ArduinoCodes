int led=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  int rdvalue=analogRead(A0);
  Serial.println(rdvalue);
  delay(100);
  if(rdvalue<150)
  {
    
   
    digitalWrite(led,1);
    }
    else 
    {
      digitalWrite(led,0);
      }
  

}
