// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1500);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(1500);
}
