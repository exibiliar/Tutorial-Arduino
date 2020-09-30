int luce;  //Creo la variabile luce 
int valore = 130; //Creo la variabile luce

void setup() {
  Serial.begin(9800);
  pinMode(8, OUTPUT);  //il pin che da corrente al led è il numero 8
}

void loop() {
  luce = analogRead(A5);  //Dal pin A5 leggo il valore della luce
  if (luce < valore) {  //se valore è maggiore al valore accendo il led 
    digitalWrite(8, HIGH);
  }
  else {
    digitalWrite(8, LOW); //in caso contrario è spento
  }

  Serial.println(luce);


}
