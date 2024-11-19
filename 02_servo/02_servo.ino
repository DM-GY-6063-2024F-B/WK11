#include <Servo.h>

Servo myservo;

int pos;
int posDir;

void setup() {
  myservo.attach(2);
  pos = 0;
  posDir = 1;
}

void loop() {
  myservo.write(pos);
  pos = (pos + posDir);
  if (pos <= 0 || pos >= 180) {
    posDir *= -1;
  }
  delay(8);
}
