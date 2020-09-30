int tempo = 1000;
int tempo1 = 500;
int tempo2 = 250;
int pinLed = 8;
int buttonPin = 9;
void setup(){
  pinMode(pinLed,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop(){
  digitalWrite(pinLed,HIGH);
  if(digitalRead(buttonPin)==HIGH){
      digitalWrite(pinLed,HIGH);
  }
  else{
    digitalWrite(pinLed,LOW);
    delay(tempo);
    digitalWrite(pinLed,HIGH);
    delay(tempo1);
    digitalWrite(pinLed,LOW);
    delay(tempo2);}
}
