int spk = 2;
int sw1 = 8;
int sw2 = 7;
int sw3 = 4;
int D1 = 250;
int D2 = 500;
int D3 = 750;
void setup() {
  pinMode(spk,OUTPUT);
  pinMode(sw,INPUT_PULLUP);
}
void loop() {
  if (digitalRead(sw1)== 0){D = D1;}
  else if (digitalRead(sw2)== 0){D = D2;}
  else if (digitalRead(sw3)== 0){D = D3;}
  tone(spk,D,500)

}
