int a=8;
int b=9;
int c=10;
int d=11;
int e=12;
int f=13;
int g=7;

int sev[]={a,b,c,d,e,f,g};
void zero()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
}

void one()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}

void two()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
}

void three()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
}

void four()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}

void five()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void six()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void seven()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
void eight()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}

void nine()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0 );
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void setup()
{
  for(int i=0;i<7;i++)
  {
    pinMode(sev[i],OUTPUT);
  }
 }
 
  void loop()
  {
    zero();
    delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 
    one();
    delay(1000);
    for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 
    two();
    delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 

    three();
    delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 
    four();
    delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  }
  five();
  delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  }    
  six();
  delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 
  seven();
  delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 
  eight();
  delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 
  nine();
  delay(1000);
     for(int i=0;i<7;i++)
  {
    digitalWrite(sev[i],0);
  } 
}
