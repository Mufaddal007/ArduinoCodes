/* 
 color code for my stepper motor
 Brown orange yellow red 
 when driving using uln2003 darlington IC
 */
void setup() {
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop() {
  
digitalWrite(8,1);
delay(50);
digitalWrite(8,0);

digitalWrite(9,1);
delay(50);
digitalWrite(9,0);

digitalWrite(10,1);
delay(50);
digitalWrite(10,0);

digitalWrite(11,1);
delay(50);
digitalWrite(11,0);


}
