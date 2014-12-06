
// Ultrasonic sensor to start game


int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int trigPin = 1;
int echoPin = 2;

void setup(){
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}

void loop(){
 int duration, distance;
 digitalWrite(trigPin, LOW); // start of wave proccess
 delayMicroseconds(1000); // = 1 millisecond delay
 digitalWrite(trigPin, HIGH); // sends out first wave
 delayMicroseconds(1000);
 digitalWrite(trigPin, LOW); 
 duration = pulseIn(echoPin, HIGH); // time taken for wave to return
 distance = (duration/2)/29.1; // converts duration to distance in cm
 Serial.print(distance);
 Serial.println("cm");
 delay(500);
  
if(distance < 30)
 {
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH);
   digitalWrite(LED4, HIGH);
   delay(500);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, LOW);
   digitalWrite(LED4, LOW);
   delay(500);
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH);
   digitalWrite(LED4, HIGH);
   delay(500);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, LOW);
   digitalWrite(LED4, LOW);
   delay(500);
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH);
   digitalWrite(LED4, HIGH);
   delay(500);
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, LOW);
   digitalWrite(LED3, LOW);
   digitalWrite(LED4, LOW);
   delay(500);
//insert kelly's work
 }
  else {
    
    //play demo
       }
           }//end loop


