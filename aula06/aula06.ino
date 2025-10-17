// C++ code
//

bool dirAv = true;
bool dirRc = false;
const byte interruptor = 12;

int aproxLimite = 200;

void pararMotores() {
  analogWrite(11, 0);
  analogWrite(5, 0);
}

void avancaDireita(int varPWM) {
  dirAv = true;
  dirRc = false;
  digitalWrite(9, dirAv);
  digitalWrite(10, dirRc);
  analogWrite(11, varPWM);
}

void recuaDireita(int varPWM) {
  dirAv = false;
  dirRc = true;
  digitalWrite(9, dirAv);
  digitalWrite(10, dirRc);
  analogWrite(11, varPWM);
}

void recuaEsquerda(int varPWM) {
  dirAv = true;
  dirRc = false;
  digitalWrite(6, dirAv);
  digitalWrite(7, dirRc);
  analogWrite(5, varPWM);
}

void avancaEsquerda(int varPWM) {
  dirAv = false;
  dirRc = true;
  digitalWrite(6, dirAv);
  digitalWrite(7, dirRc);
  analogWrite(5, varPWM);
}

void girarEixoEsquerda(int varPWM) {
  avancaDireita(varPWM);
  recuaEsquerda(varPWM);
}
void girarEixoDireita(int varPWM) {
  recuaDireita(varPWM);
  avancaEsquerda(varPWM);
}

void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  // Motor Direita
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);
  // Motor Esquerda
  pinMode(5, OUTPUT);
  pinMode(interruptor, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptor), pararMotores, FALLING);
}

void loop() {
  int varA = analogRead(A0);
  int varTransicao = map(varA, 0, 1023, 0, 255);
  analogWrite(3, varTransicao);

  // Motor

  int varPWM = 255;
  // delay(2000);
  // avancaDireita(varPWM);
  // avancaEsquerda(varPWM);
  // delay(2000);
  // recuaDireita(varPWM);
  // recuaEsquerda(varPWM);
  // delay(2000);
  // girarEixoEsquerda(varPWM);
  // delay(500);
  // girarEixoDireita(varPWM);
  // delay(500);
  avancaDireita(255);
  avancaEsquerda(255);
}
