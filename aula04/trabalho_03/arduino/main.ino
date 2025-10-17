// C++ code
//

#define maxAnalogInput 1024
#define ledPin 13

bool ledStatus = false;

void desligaLed() { digitalWrite(ledPin, LOW); }

void ligaLed() { digitalWrite(ledPin, HIGH); }

void piscaLed() {
  if (!ledStatus) {
    desligaLed();
  } else {
    ligaLed();
  }
  ledStatus = !ledStatus;
}

void setup() {
  pinMode(A1, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(A1);
  int mapLeitura = map(leitura, 0, maxAnalogInput, 0, 100);
  Serial.println(mapLeitura);
  if (mapLeitura < 33)
    desligaLed();
  else if (mapLeitura > 66)
    piscaLed();
  else
    ligaLed();
  delay(500);
}
