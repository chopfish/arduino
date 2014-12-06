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

//  --------------------- new code
    for (int y=turn; y <= turn; y++)
      randomArray[y] = random(1, 5); //Assigning a random number (1-4) to the randomArray[y], y being the turn count
      for (int x=0; x <= turn; x++)
      {
        Serial.print(randomArray[x]);
        for(int y=0; y<4; y++)
        {
      
          if (randomArray[x] == 1 && ledpin[y] == 13) 
          {  //if statements to display the stored values in the array
            digitalWrite(ledpin[y], HIGH);
            speakerpin.play(NOTE_G3, 100);
            delay(400);
            digitalWrite(ledpin[y], LOW);
            delay(100);
          }

          if (randomArray[x] == 2 && ledpin[y] == 12) 
          {
            digitalWrite(ledpin[y], HIGH);
            speakerpin.play(NOTE_A3, 100);
            delay(400);
            digitalWrite(ledpin[y], LOW);
            delay(100);
          }
  
          if (randomArray[x] == 3 && ledpin[y] == 11) 
          {
            digitalWrite(ledpin[y], HIGH);
            speakerpin.play(NOTE_B3, 100);
            delay(400);
            digitalWrite(ledpin[y], LOW);
            delay(100);
          }

          if (randomArray[x] == 4 && ledpin[y] == 10) 
          {
            digitalWrite(ledpin[y], HIGH);
            speakerpin.play(NOTE_C4, 100);
            delay(400);
            digitalWrite(ledpin[y], LOW);
            delay(100);
          }
        }
      }
    }
    input();
  }
}
 // ----------------- end of new code 
  
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
