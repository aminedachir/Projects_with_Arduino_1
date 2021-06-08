void setup() {
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  digitalWrite(7,1);
  digitalWrite(2,0);
  delay(1000);
  digitalWrite(7,0);
  digitalWrite(2,1);
  delay(1000); 
}
