float r2;
float v2;
void setup() {
Serial.begin(9600);

}
void loop() {
v2=analogRead(A0);
v2=5*(v2/1024);
r2=(float)((10000*v2)/(5-v2));

if (v2>4.9)
{
 Serial.println("Not connected"); 
 } 

else {
Serial.print("Voltage Drop: ");
Serial.print(v2);
Serial.print(" V           ");  
if (r2>1000)
{
  r2=r2/1000;
  Serial.print("Resistance: ");
  Serial.print(r2);
  Serial.println(" KOhms");
  }
else
{
  
Serial.print("Resistance: ");
Serial.print(r2);
Serial.println(" Ohms");
  
  }

}
delay(1000);
}
