int valve=0;
int buzzer=4;
int moisture_sensor=3;
int indicator=1;
int unused2=2;
int upper_bound=900;
int lower_bound=400;

int state=0;
void setup(){
  pinMode(valve, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(moisture_sensor, INPUT);
  pinMode(indicator, OUTPUT);
  pinMode(unused2, INPUT_PULLUP);
  digitalWrite(indicator, 1);
  delay(700);
  digitalWrite(indicator, 0);
  delay(300);
  digitalWrite(indicator, 1);
  delay(700);
  digitalWrite(indicator, 0);
  delay(300);
  digitalWrite(indicator, 1);
  }
void loop(){
  int result=analogRead(moisture_sensor);
  if (result>upper_bound){
      digitalWrite(valve, 1);

      while(result>lower_bound) {
      soundBuzzer();
      result=analogRead(moisture_sensor);
      }
      digitalWrite(valve, 0);
      digitalWrite(buzzer, 0);
      digitalWrite(indicator, 1);
    }
 }
void soundBuzzer()
{
  state=1-state;
  digitalWrite(buzzer, state);
  digitalWrite(indicator, state);
  delay(1000);
  }
  
