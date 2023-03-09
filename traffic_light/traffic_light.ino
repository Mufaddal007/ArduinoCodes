int red=11;
int yellow=12;
int green=13;

void setup() {
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);  

}

void loop() {
 digitalWrite(red,1);
 digitalWrite(yellow,0);
 digitalWrite(green,0);
 delay(8000);

 digitalWrite(red,1);
 digitalWrite(yellow,1);
 digitalWrite(green,0);
 delay(2000);

 digitalWrite(red,0);
 digitalWrite(yellow,0);
 digitalWrite(green,1);
 delay(8000);
 
 digitalWrite(red,0);
 digitalWrite(yellow,1);
 digitalWrite(green,1);
 delay(2000);



}
