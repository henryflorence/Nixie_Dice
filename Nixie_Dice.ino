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

  int throwLength = random(10, 20);
  for(int i=0; i < throwLength; i++) {
    digitalWrite(2, HIGH && (i % 10 & 1));
    digitalWrite(3, HIGH && (i % 10 & 2));
    digitalWrite(4, HIGH && (i % 10 & 4));
    digitalWrite(5, HIGH && (i % 10 & 8));
    delay(300);
  }
  digitalWrite(13, LOW);
}

// the loop function runs over and over again forever
void loop() {

}
