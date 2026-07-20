#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;

void setup() {
  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
}

void loop() {

  unsigned long startTime = millis();

  while (millis() - startTime < 2000) {

    for (int angle = 0; angle <= 180; angle++) {
      s1.write(angle);
      s2.write(angle);
      s3.write(angle);
      s4.write(angle);
      delay(5);
    }

    for (int angle = 180; angle >= 0; angle--) {
      s1.write(angle);
      s2.write(angle);
      s3.write(angle);
      s4.write(angle);
      delay(5);
    }
  }

  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);

  while (true);
}
