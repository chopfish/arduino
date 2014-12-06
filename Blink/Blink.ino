#define LED 13
#define BUTTON 7

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  //while(digitalRead(BUTTON)==HIGH)
  //{
    //digitalWrite(LED)=HIGH;
  //}
  //else
    //digitalWrite(LED)=LOW;
    
  if(digitalRead(BUTTON)==HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  delay(200);
}
