/*
 color code for my stepper motor
 Brown red orange yellow
 this color code works when driving stepper motor using transistors
 
 */
int steppins[]={4,5,6,7};

void setup() {
for(int i=0;i<4;i++)
{
  pinMode(steppins[i],OUTPUT);
  }

}

void loop() {
 for(int i=0;i<4;i++)
 {
  digitalWrite(steppins[i],1);
  delay(10);
  digitalWrite(steppins[i],0);
  }
}
