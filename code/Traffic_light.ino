int redLed=13;
int yellowLed=12;
int greenLed=11;
int buttonPin=2;

int buttonState;

void setup()
{

 pinMode(redLed,OUTPUT);
 pinMode(yellowLed,OUTPUT);
 pinMode(greenLed,OUTPUT);
 pinMode(buttonPin,INPUT_PULLUP);
  
}

void loop()
{

buttonState=digitalRead(buttonPin);
  
if(buttonState==LOW)
 {
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,HIGH);
  delay(2000);
  digitalWrite(yellowLed,LOW);
  digitalWrite(redLed,HIGH);
  delay(5000);
  digitalWrite(redLed,LOW);
  digitalWrite(yellowLed,HIGH);
  delay(2000);
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed,HIGH); 
 }
else
 {   
  digitalWrite(greenLed,HIGH);
  digitalWrite(redLed,LOW); 
  digitalWrite(yellowLed,LOW); 
 }
  
}