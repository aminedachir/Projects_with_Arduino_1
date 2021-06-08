void setup() {
  pinMode(7,OUTPUT);
}

void loop() {
  digitalWrite(7,HIGH);
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(2,HIGH);
  delay(1000); 
}
