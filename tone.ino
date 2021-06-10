int a = 9;b = 8;c = 7;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(a,INPUT_PULLUP);
  pinMode(b,INPUT_PULLUP);
  pinMode(c,INPUT_PULLUP);
}
void loop() {
  if (digitalRead(a)== 1){tone(12,261,500);}
  if (digitalRead(b)== 0){tone(12,289,500);}
  if (digitalRead(c)== 0){tone(12,344,500);}
}
