#include <Wire.h>

#define ADDR_Ax 0b000 //A2, A1, A0
#define ADDR (0b1010 << 3) + ADDR_Ax
short i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
 }

void loop() {
  for (int j=0;j<50; j++){
 writeI2CByte(j,i);
 i+=5;}

 delay(2000);
 Serial.println("Writing complete");
  for(int j=50;j>=0;j--)
  {
    Serial.println(readI2CByte(j));
    }
    while(1);
} 

void writeI2CByte(byte data_addr, byte data){
  Wire.beginTransmission(ADDR);
  Wire.write(data_addr);
  Wire.write(data);
  Wire.endTransmission();
}

byte readI2CByte(byte data_addr){
  byte data = NULL;
  Wire.beginTransmission(ADDR);
  Wire.write(data_addr);
  Wire.endTransmission();
  Wire.requestFrom(ADDR, 1); //retrieve 1 returned byte
  if(Wire.available()){
    data = Wire.read();
  }
  delay(5);
  return data;
}
