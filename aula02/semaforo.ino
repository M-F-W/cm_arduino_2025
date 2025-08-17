void setup() {
  pinMode(7, OUTPUT); // Set pin 13 as an output
  pinMode(8, OUTPUT); // Set pin 13 as an output
  pinMode(9, OUTPUT); // Set pin 13 as an output
}

void loop() {
  digitalWrite(7, HIGH); // Turn the LED on
  delay(3000);
  digitalWrite(7, LOW); // Turn the LED on

  digitalWrite(8, HIGH); // Turn the LED on
  delay(1000);
  digitalWrite(8, LOW); // Turn the LED on

  digitalWrite(9, HIGH); // Turn the LED on
  delay(3000);
  digitalWrite(9, LOW); // Turn the LED on
}
