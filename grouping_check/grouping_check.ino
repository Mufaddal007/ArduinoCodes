//t leds[]={1,2,3,4,5,6, 7, 8, 9, 10}

int grp1[6]={4,5,8,9,12,13};
int grp2[4]={6,7,10,11};

void setup() {

    for(int i=0;i<6;i++)
    {
      pinMode(grp1[i],OUTPUT);
      
      }   
      for(int i=0;i<4;i++)
    {
      pinMode(grp2[i],OUTPUT);
      
      }   
   
}

void loop() {
    for(int i=0;i<6;i++)
    {
      
      digitalWrite(grp1[i],1);
      
    }
     delay(500);
     for(int i=0;i<6;i++)
    {
      
      digitalWrite(grp1[i],0);
      
    }
    
     for(int i=0;i<4;i++)
    {
      
      digitalWrite(grp2[i],1);
      
    }
    delay(500);
     
       for(int i=0;i<4;i++)
    {
      
      digitalWrite(grp2[i],0);
      
    }
    

     
     
 

}
