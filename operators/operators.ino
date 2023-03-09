void setup() {
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int x=9;
  int y=6;
  int z=x-y;
  Serial.print(z);
  delay(1000);
  z=x+y;
  Serial.print(z);
  delay(1000);
}
