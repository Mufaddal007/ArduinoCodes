#include <Stepper.h>
Stepper mystep(100,2,3,4,5);

int ldrR=A0,ldrL=A1;
int ldrR_val, ldrL_val;

void setup() {
Serial.begin(9600);
pinMode(ldrR,INPUT);
pinMode(ldrL, INPUT);
mystep.setSpeed(60); 

}

void loop() {
ldrR_val=analogRead(ldrR);
ldrL_val=analogRead(ldrL);
Serial.println("ldrR_val:  ldrR_val: ");
Serial.println(ldrR_val, ldrL_val);
int dif=ldrR_val-ldrL_val;
if (dif>100){while(dif>100){ mystep.step(1); ldrR_val=analogRead(ldrR); ldrL_val=analogRead(ldrL); dif=ldrR-ldrL; }}
else if (dif<-100) {while(dif<-100){ mystep.step(-1); ldrR_val=analogRead(ldrR); ldrL_val=analogRead(ldrL); dif=ldrR-ldrL; }}

}
