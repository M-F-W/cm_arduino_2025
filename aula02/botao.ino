#define iLED1 7
#define iLED2 8
#define iLED3 9
#define iBotao 2
bool trocaValor = false;
bool iStatus = LOW; // Initial state of the LEDs

void setup() {
  pinMode(iLED1, OUTPUT);
  pinMode(iLED2, OUTPUT);
  pinMode(iLED3, OUTPUT);
  pinMode(iBotao, INPUT);
}

void loop() {
  bool trocaValor = digitalRead(iBotao);
  if (iStatus == HIGH && trocaValor == LOW) {
    iStatus = LOW;
    delay(1000); // Debounce delay
  } else if (iStatus == LOW && trocaValor == LOW) {
    iStatus = HIGH;
    delay(1000); // Debounce delay
  }
  digitalWrite(iLED1, iStatus);
  digitalWrite(iLED2, iStatus);
  digitalWrite(iLED3, iStatus);
}
