int lastUpdate;
int cValue;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  cValue = 0;
  lastUpdate = 0;
  analogWrite(2, cValue);
  analogWrite(3, cValue);
}

void loop() {
  int now = millis();

  if (now > lastUpdate + 10) {
    cValue = (cValue + 1) % 256;
    lastUpdate = now;
    analogWrite(2, cValue);
    analogWrite(3, cValue);
  }
}
