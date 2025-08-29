// C++ code

bool varMicro01 = false;
bool varMicro02 = false;
void setup() {
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(8) == LOW) {
    varMicro01 = !varMicro01;
    digitalWrite(11, HIGH);
    if (varMicro01) {
      Serial.println("L");
    } else {
      Serial.println("D");
    }
    delay(300);
    digitalWrite(11, LOW);
  }
  if (digitalRead(9) == LOW) {
    varMicro01 = !varMicro01;
    digitalWrite(12, HIGH);
    if (varMicro01) {
      Serial.println("L");
    } else {
      Serial.println("D");
    }
    delay(300);
    digitalWrite(12, LOW);
  }
}
