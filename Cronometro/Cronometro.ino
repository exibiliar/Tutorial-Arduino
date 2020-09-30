int tempo = 200; // Dichiaro la variabile Tempo
int pinLed = 2; //Dichiaro quali pin vado ad usare
int buttonPin = 11;

int a; //dichiaro la variabile a

void setup() {
  pinMode(pinLed, OUTPUT); //setto due tipi di variabile una input e l'altra output
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);  //dichairo a che velocita deve lavorare il mio processore
  a = 0;  //azzero la variabile a
}

void loop() {
  delay(random(5000, 10000)); //imposto un tempo random tra 5 e 10 sec
  digitalWrite(pinLed, HIGH);  //quando il led è acceso il count è a 0
  a = 0;
  while (digitalRead(buttonPin) == LOW) {  //se il pulsante viene premuto aggiungo 1 al count
    a++;
    delay(1);
  }
  Serial.print("hai aspettato ");  //stampo
  Serial.print(a);
  Serial.println(" millisecondi");
  digitalWrite(pinLed, LOW);   //spengo il led
}
