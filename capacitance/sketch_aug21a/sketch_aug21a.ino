float tc;
float c;
long starttime;
int charge=2;
int discharge=3;
int an=A0;
void setup() {
  Serial.begin(9600);
  pinMode(charge, OUTPUT);
  
 }

void loop() {
digitalWrite(charge,1);
starttime=millis();
while(analogRead(an)<648){};
tc=millis()-starttime;
digitalWrite(charge, 0);

c= (float)(tc/10000)*1000;
Serial.print("Capacitance: ");
Serial.print(c);
Serial.println(" microFarads");

pinMode(discharge,OUTPUT);
digitalWrite(discharge, 0);
while(analogRead(A0)>0){};
pinMode(discharge, INPUT);
delay(1000);

}
