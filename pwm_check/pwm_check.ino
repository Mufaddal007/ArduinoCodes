int led=10;
void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  for(int i=0;i<255;i+=10)
  {
    analogWrite(led,i);
    delay(50);
    }

}
