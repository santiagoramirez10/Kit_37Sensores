int LED=13;
int sensor=A0;
int lecturaSensor;
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(sensor,INPUT);
}
void loop() {
  lecturaSensor = analogRead(sensor);
   Serial.println(lecturaSensor);
   if (lecturaSensor<300){
    digitalWrite(LED,HIGH);
    delay(200);
   }
   else{
    digitalWrite(LED,LOW);
   }
 }