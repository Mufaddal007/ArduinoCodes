int charge=2;
int pulsein=3;
float inductance;
float pulse;
void setup() {
pinMode(charge,OUTPUT);
pinMode(pulsein, INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(charge, 1);
delay(10);
digitalWrite(charge,0);
pulse=2*(pulseIn(pulsein, 1, 5000));
if (pulse>0.1) { 
inductance=(float)253302.9591*pulse*pulse;
inductance*=1e6;
Serial.print("Inductance: "); Serial.println(inductance);}
else {Serial.println("Nothing connected");}

}
