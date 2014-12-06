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

// the loop function runs over and over again forever
void loop() 
{  
  int x=(int)(random()*3+1); //1-4
  if(x==1)
  {
    digitalWrite(LED1,HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
  }
  else if(x==2)
  {
    digitalWrite(LED2,HIGH);
    delay(500);
    digitalWrite(LED2, LOW);
  }
  else if(x==3)
  {
    digitalWrite(LED3,HIGH);
    delay(500);
    digitalWrite(LED3, LOW);
  }
  if(x==4)
  {
    digitalWrite(LED4,HIGH);
    delay(500);
    digitalWrite(LED4, LOW);
  }
}

