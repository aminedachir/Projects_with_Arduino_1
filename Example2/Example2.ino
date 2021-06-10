int led = 4;
int sw = 8;
int D1 = 1000;
int D2 = 400;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sw,INPUT_PULLUP);
}
void loop()
{
  int D;
  if (digitalRead(sw)==1){D = D1;}
  else {D = D2;}
  digitalWrite(led, HIGH);
  delay(D);
  digitalWrite(led, LOW);
  delay(D);
}
