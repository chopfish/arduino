int led = 13; // choose the pin for the LED
int button = 7;// choose the input pin (for a pushbutton)
int led2 = 12;
int button2 = 6;
int led3 = 11;
int button3 = 5;
int led4 = 11;
int button4 = 4;
int array[] = {};

// the setup function runs once when you press reset or power the board
void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(button2, INPUT);
  pinMode(led3, OUTPUT);
  pinMode(button3, INPUT);
  pinMode(led4, OUTPUT);
  pinMode(button4, INPUT);
}

// the loop function runs over and over again forever
void loop() 
{  
  int x=(int)(random()*3+1); //1-4
  
  if(x==1)
  {
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led, LOW);
  }
  else if(x==2)
  {
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led2, LOW);
  }
  else if(x==3)
  {
    digitalWrite(led3,HIGH);
    delay(500);
    digitalWrite(led3, LOW);
  }
  if(x==4)
  {
    digitalWrite(led4,HIGH);
    delay(500);
    digitalWrite(led4, LOW);
  }
}

