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
   for(int x=1; x<16; x++)
  { 
    int ar[x];
    for(int y=0; y<x; y++)
    {
      int a=(int)(random(1,4));
      ar[y]=a;
    }
  }
    
}


