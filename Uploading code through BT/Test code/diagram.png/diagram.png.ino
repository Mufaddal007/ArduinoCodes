void setup() {
pinMode(13,OUTPUT);
Serial.begin(115200);
Serial.println("this is a test");

}

void loop() {
  digitalWrite(13,1); Serial.println("ON"); delay(1000);
  
  digitalWrite(13,0); Serial.println("OFF"); delay(1000);
  

}
