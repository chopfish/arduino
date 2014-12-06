#define LED1 13
#define BUTTON1 7
#define LED2 12
#define BUTTON2 6
#define LED3 11
#define BUTTON3 5
#define LED4 10
#define BUTTON4 4


// the setup function runs once when you press reset or power the board
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
  
}
void loop()
{
  int x;
  int ar[x];
  for(x=1; x<31; x++)
  { 
    for(int y=0; y<x; y++)
    {
      int a=(int)(random(1,4));
      ar[y]=a;
    }
  }
   if(ar[x]==1)
    {
      digitalWrite(LED1, HIGH);
      delay(500);
      digitalWrite(LED1,LOW);
    }
     if(ar[x]==2)
    {
      digitalWrite(LED2, HIGH);
      delay(500);
      digitalWrite(LED2,LOW);
    }
     if(ar[x]==3)
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
  
 
}




