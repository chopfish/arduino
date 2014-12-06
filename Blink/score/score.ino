void setup(){
#define LED1 13
#define BUTTON1 7
#define LED2 12
#define BUTTON2 6
#define LED3 11
#define BUTTON3 5
#define LED4 10
#define BUTTON4 4
#define LED4 9

  int arrSize = 11

  if(arrSize >= 16)
  {
    digitalWrite(LED5, HIGH);
    arrSize = arrSize - 16
      if(arrSize >= 8)
        {
           digitalWrite(LED4, HIGH); 
        }
      else if(arrSize >=4)
        {
           digitalWrite(LED3, HIGH); 
        }
      else if(arrSize >=2)
        {
           digitalWrite(LED2, HIGH); 
        }
      else if(arrSize >= 1)
      {
         digitalWrite(LED1, HIGH); 
      }
      else
        {
          
        }
  
  }
  else if(arrSize >= 8)
  {
    digitalWrite(LED4, HIGH);
    arrSize = arrSize - 8
      if(arrSize >=4)
        {
           digitalWrite(LED3, HIGH); 
        }
      else if(arrSize >=2)
        {
           digitalWrite(LED2, HIGH); 
        }
      else if(arrSize >= 1)
      {
         digitalWrite(LED1, HIGH); 
      }
      else
        {
         
        }
  }
  else if(arrSize >= 4)
  {
      digitalWrite(LED3, HIGH); 
      arrSize = arrSize - 4
      if(arrSize >=2)
        {
           digitalWrite(LED2, HIGH); 
        }
      else if(arrSize >= 1)
      {
         digitalWrite(LED1, HIGH); 
      }
      else
        {
          
        }
  }
  else if(arrSize >= 2)
  {
    digitalWrite(LED2, HIGH); 
    arrSize = arrSize - 2
    if(arrSize >= 1)
      {
         digitalWrite(LED1, HIGH); 
      }
      else
        {
          
        }
  }
  else if(arrSize >=1)
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    
  }
}
