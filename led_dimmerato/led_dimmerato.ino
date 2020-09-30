int pinLed = 6;                     //utilizzo il pin 6


void setup() {
  pinMode(pinLed, OUTPUT);           //lo configuro come OUTPUT

}

void loop() {

  for (int i = 0; i <= 255; i++) {    //creo un ciclo for che mi faccia incrementare la luminosità gradualmente
    analogWrite(pinLed, i);           //il valore di luminosita è dato dalla variabile i
    delay(10);
  }
  delay(1000);
  for (int i = 255; i >= 0; i--) {    //questo ciclo decrementa la luminosita gradualmente
    analogWrite(pinLed, i);
    delay(10);
  }
  delay(5000);   // viene spento per 5 sec
}
