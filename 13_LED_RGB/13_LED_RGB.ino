int pulsadorRojo=5;
int pulsadorVerde=6;
int pulsadorAzul=7;
int LEDRojo=11;
int LEDVerde=12;
int LEDAzul=13;

void setup() {
  pinMode(pulsadorRojo,INPUT);
  pinMode(pulsadorVerde,INPUT);
  pinMode(pulsadorAzul,INPUT);
  pinMode(LEDRojo,OUTPUT);
  pinMode(LEDVerde,OUTPUT);
  pinMode(LEDAzul,OUTPUT);
}

void loop() {
  digitalWrite(LEDRojo,digitalRead(pulsadorRojo));
  delay(200);
  digitalWrite(LEDVerde,digitalRead(pulsadorVerde));
  delay(200);
  digitalWrite(LEDAzul,digitalRead(pulsadorAzul));
  delay(200);
}
