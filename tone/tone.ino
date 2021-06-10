int spk = 2;
int sw1 = 8;
int sw2 = 7;
int sw3 = 4;
int D1 = 250;
int D2 = 500;
int D3 = 750;
void setup() {
  pinMode(spk,OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  pinMode(sw3,INPUT_PULLUP);
}
void loop() {
  int D;
  if (digitalRead(sw1)== 1){D = D1;}
  else if (digitalRead(sw2)== 0){D = D2;}
  else if (digitalRead(sw3)== 0){D = D3;}
  tone(spk,D,500);
}
