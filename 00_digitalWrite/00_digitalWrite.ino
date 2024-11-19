bool pinState2;
bool pinState3;

int lastChange2;
int lastChange3;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  pinState2 = LOW;
  pinState3 = LOW;

  lastChange2 = 0;
  lastChange3 = 0;
}

void loop() {
  int now = millis();
  if (now > lastChange2 + 500){
    pinState2 = !pinState2;
    lastChange2 = now;
  }

  if (now > lastChange3 + 133){
    pinState3 = !pinState3;
    lastChange3 = now;
  }

  digitalWrite(2, pinState2);
  digitalWrite(3, pinState3);
}
