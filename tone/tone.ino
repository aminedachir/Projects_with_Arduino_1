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
  if (digitalRead(sw)== 1)
  tone(spk,D1,500)

}
