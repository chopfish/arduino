#define LED1 13
#define BUTTON1 7
#define LED2 12
#define BUTTON2 6
#define LED3 11
#define BUTTON3 5
#define LED4 10
#define BUTTON4 4

int lightSeq[30];
int pos=0;
int lim=1;
boolean play=true;
int buttonSeq[
void setup() 
{
  pinMode(LED1, OUTPUT);
  pinMode(BUTTON1, INPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED3, OUTPUT);
  pinMode(BUTTON3, INPUT);
  pinMode(LED4, OUTPUT);
  pinMode(BUTTON4, INPUT);
  for(; pos<lim;pos++)
  {
    lightSeq[pos]=random(1,5);  
  }
  pos=0;
  lim++;
  
  
  digitalWrite(LED1,HIGH);
  digitalWrite(LED3,HIGH);
}

void loop()
{
  
  if(digitalRead(7)==HIGH) {
      digitalWrite(LED2,HIGH);
      delay(500);
      digitalWrite(LED3,LOW);
  }
  
  /*
  if(digitalRead(6)==HIGH)
  {
     digitalWrite(LED1,HIGH);
     
  }
  else
  {
    digitalWrite(LED1,LOW);
  }
  *.
  
  //int x=(int) (random(1,4));
  /*
  if(x[pos]==1)
  {
    digitalWrite(LED1,HIGH);  
  }
  else if(x[pos]==2)
  {
    digitalWrite(LED2, HIGH);
  }
  else if(x[pos]==3)
  {
    digitalWrite(LED3,HIGH);
  }
  else if(x[pos]==4)
  {
    digitalWrite(LED4,HIGH);
  }
 delay (1000);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED4, LOW);
  pos++;*/
 //delay (1000);
  
  
  /* 
  int x;
  int ar[31];
  boolean play=true;
  Serial.print("hello");
  while(play)
  {
    x=0;
    for(;x<31;x++)
    {
      ar[x]=random(1,5);
      Serial.print(ar[x]);
    }
    if(ar[x]==1) // if int at index x == 1, then turn on led1 
    {
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1,LOW);
    }
    else if(ar[x]==2)
    {
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2,LOW);
    }
    else if(ar[x]==3)
    {
      digitalWrite(LED3, HIGH);
      delay(500);
      digitalWrite(LED3,LOW);
    }
    else
    {
      digitalWrite(LED4, HIGH);
      delay(500);
      digitalWrite(LED4,LOW);
    }
    
    delay (500); // pause- user input button
    
    
   
    for(; x<31 ; x++)
   {
     
    
   } 
  }*/
  
}

boolean buttonRight(int x, int y)
{
  if(x==y)
  {
    return true;
  }
  else
    return false;
}

int buttonPressed(int but)
{
  if(BUTTON1==LOW)
  {
    but=1;
  }
  else if (BUTTON2==LOW)
  {
    but=2;
  }
  else if(BUTTON3==LOW)
  {
    but=3;
  }
  else if (BUTTON4==LOW)
  {
    but=4;
  }
  else // nothing pressed 
  {
    
  }
}
