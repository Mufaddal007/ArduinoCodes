void setup() {
   
  Serial.begin(9600);

}

void loop() {
  while(Serial.available()>1){
   char rdvalue=Serial.read();
   Serial.println(rdvalue);
    
  }

}
