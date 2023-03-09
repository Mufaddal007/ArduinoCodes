void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(4,INPUT);
pinMode(12,OUTPUT);//LED
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(4)==LOW){
  digitalWrite(12,HIGH);
  Serial.println("obstacle found");
  delay(1000);
}
else{
  digitalWrite(12,LOW);
}
}
