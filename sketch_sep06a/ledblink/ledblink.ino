
int led=7;
int led1=8;
int led2=9;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  

}

void loop() {
 digitalWrite(led,HIGH);
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 delay(1000);
 digitalWrite(led,LOW); 
 digitalWrite(led1,HIGH);
 digitalWrite(led2,LOW);
 delay(1000);
 digitalWrite(led,LOW);
 digitalWrite(led1,LOW);
 digitalWrite(led2,HIGH);
 delay(1000);
}
