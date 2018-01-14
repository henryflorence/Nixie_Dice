/*
  Nixie Dice

  by Henry Florence
*/

void setup() {
  randomSeed(analogRead(2));
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);

  for(int i=0; i < 10; i++) {
    digitalWrite(2, HIGH && (i % 10 & 1));
    digitalWrite(3, HIGH && (i % 10 & 2));
    digitalWrite(4, HIGH && (i % 10 & 4));
    digitalWrite(5, HIGH && (i % 10 & 8));
    delay(300);
  }
  
  int throwLength = random(1, 12);
  for(int i=0; i < throwLength; i++) {
    int num = random(0,10);
    digitalWrite(2, HIGH && (num % 10 & 1));
    digitalWrite(3, HIGH && (num % 10 & 2));
    digitalWrite(4, HIGH && (num % 10 & 4));
    digitalWrite(5, HIGH && (num % 10 & 8));
    delay(300);
  }
  digitalWrite(13, LOW);
}

// the loop function runs over and over again forever
void loop() {

}
