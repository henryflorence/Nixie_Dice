/*
  Nixie Dice

  by Henry Florence
*/

void setup() {
  //randomSeed(analogRead(0));
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);

  int throwLength = random(6, 12);
  for(int i=0; i < throwLength; i++) {
    int num = random(0,10);
    digitalWrite(2, HIGH && (num & 1));
    digitalWrite(3, HIGH && (num & 2));
    digitalWrite(4, HIGH && (num & 4));
    digitalWrite(5, HIGH && (num & 8));
    delay(300);
  }
  digitalWrite(13, HIGH);
}

// the loop function runs over and over again forever
void loop() {

}
