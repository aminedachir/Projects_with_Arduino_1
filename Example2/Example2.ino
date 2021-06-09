const int led1 = 7;
const int led2 = 2;
int D = 100;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop() {
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  delay(D);
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  delay(D);
  D = D + 50; 
}
