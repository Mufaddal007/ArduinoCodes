bool needToPrint = false ;
int count=0;
int  previous = HIGH;
int  present = LOW;
long timechange= 0;
void dsply(int cnt)
{
   count=0;
   Serial.println(cnt);
   previous=0;
}

void setup()
{
Serial.begin(9600);
pinMode(2, INPUT);
}

void loop()
{
  while(1){
int readnow=digitalRead(2);
if (readnow != previous )
{
    timechange= ( millis() - timechange );
     Serial.print("timechange is= ");  
    Serial.println(timechange);
  if (timechange > 100)
  {
    count=0;
    }  
 else  if ((timechange < 60)  and (timechange > 40)){
              count++;
              Serial.print("timechange1 is= ");              
              Serial.println(timechange);
              
                previous=readnow;
                Serial.print("count is =  ");
                Serial.println(count);
          }
    
 
}

}

}
