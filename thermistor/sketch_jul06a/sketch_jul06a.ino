int thermistor=A3;
void setup() {
 pinMode(thermistor, INPUT);
 Serial.begin(9600);
}

void loop() {
  int value=analogRead(thermistor);
  String val1=String(value);
  Serial.println("Current Resistance: "+val1);
  
  delay(1000);
}
