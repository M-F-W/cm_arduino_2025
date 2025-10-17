// C++ code
char varRecebe;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  Serial.begin(9600);
}

void loop() {
  varRecebe = Serial.read();
  Serial.println(varRecebe);
  if (digitalRead(12) == HIGH) {
    if (varRecebe == 'L') {
      digitalWrite(13, HIGH);
    } else if (varRecebe == 'D') {
      digitalWrite(13, LOW);
    }
  }
  delay(300);
}
