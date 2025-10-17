// C++ code
//

bool dirAv = true;
bool dirRc = false;

void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  // Motor
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int varA = analogRead(A0);
  int varTransicao = map(varA, 0, 1023, 0, 255);
  analogWrite(3, varTransicao);

  // Motor

  int varPWM = 30;
  analogWrite(11, varPWM);
  delay(2000);
  dirAv = !dirAv;
  dirRc = !dirRc;

  digitalWrite(9, dirAv);
  digitalWrite(10, dirRc);
}
