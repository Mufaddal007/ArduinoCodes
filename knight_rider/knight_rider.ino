int gled[]={13,12,11};
int rled[]={10,9,8};
int bled[]={7,6,5};
void setup() {

 for(int i=0;i<3;i++)
 {
  pinMode(gled[i],OUTPUT);
  }
  for(int i=0;i<3;i++)
 {
  pinMode(rled[i],OUTPUT);
  }
  for(int i=0;i<3;i++)
 {
  pinMode(bled[i],OUTPUT);
  }
}

void loop() {
 for(int i=0;i<3;i++)
 {
  digitalWrite(gled[i],1);
  }
  delay(50);
  for(int i=0;i<3;i++)
 {
  digitalWrite(gled[i],0);
  }
  for(int i=0;i<3;i++)
 {
  digitalWrite(rled[i],1);
  }
  delay(50);
  for(int i=0;i<3;i++)
 {
  digitalWrite(rled[i],0);
  }
  for(int i=0;i<3;i++)
 {
  digitalWrite(bled[i],1);
  }
  delay(50);
  for(int i=0;i<3;i++)
 {
  digitalWrite(bled[i],0);
  }
  
}
