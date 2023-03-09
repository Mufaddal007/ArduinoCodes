
int led=13;
char rd;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  

}

void loop() {
  while(Serial.available()>0)
  {
    
    rd=Serial.read();
    Serial.println(rd);
    delay(1000);
    }
     if(rd=='1')
    {
      digitalWrite(led,1);
      }
      else
      {
        digitalWrite(led,0);
        
        }
}
