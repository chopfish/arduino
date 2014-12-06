void setup(){
#define LED1 13
#define BUTTON1 7
#define LED2 12
#define BUTTON2 6
#define LED3 11
#define BUTTON3 5
#define LED4 10
#define BUTTON4 4
#define LED5 9
}
int arrSize = 15;
//int arr[ 50 ];
//int arrSize = sizeof( arr ) / sizeof( int );
void loop()
{
if(arrSize >= 16)
  {
    digitalWrite(LED5, HIGH);
    arrSize = (arrSize - 16);
  }
else if(arrSize >= 8)
  {
    digitalWrite(LED4, HIGH);
    arrSize = (arrSize - 8);
  }  
else if(arrSize >= 4)
  { ]     
     digitalWrite(LED3, HIGH); 
     arrSize = (arrSize - 4);
  }
else if(arrSize >= 2)
  {
    digitalWrite(LED2, HIGH); 
    arrSize = (arrSize - 2);
  }
else if(arrSize >=1)
  {
    digitalWrite(LED1, HIGH);
  }
else{}
}

