int X;
int Y;
int pulsador = 10;
void setup(){
  Serial.begin(9600);
  pinMode(pulsador, INPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
}
void loop(){
  X = analogRead(A0);
  Y = analogRead(A1);
  if (X<150){
    Serial.println("Izquierda");
  }
    if (X>850){
    Serial.println("Derecha");
  }
  if(X>400 && X<550){
    Serial.println("Centro");
  }
  lcd.setCursor(3,1);
    if (Y<150){
    Serial.println("Abajo");
  }
    if (Y>850){
    ("Arriba");
  }
  if(Y>400 && Y<550){
    Serial.println("Centro");
  }
  delay(1000);
}