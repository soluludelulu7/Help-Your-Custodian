#include <DHT.h>
#include <MD_MAX72xx.h>

DHT moistureSensor(D1, DHT11);
MD_MAX72XX ledMatrix = MD_MAX72XX(MD_MAX72XX::FC16_HW, D8, 1);

void setup() {
  pinMode(D2, INPUT_PULLUP);
  moistureSensor.begin();
  ledMatrix.begin();
}

void loop() {
  if (digitalRead(D2) == LOW) {
    ledMatrix.clear();

    int humidity = moistureSensor.readHumidity();
    int rows = 0;

    if (humidity <= 20) {
      rows = 1;
    } else if (humidity <= 40) {
      rows = 2;
    } else if (humidity <= 60) {
      rows = 3;
    } else if (humidity <= 80) {
      rows = 4;
    } else {
      rows = 5;
    }

    for (int r = 0; r < rows; r++) {
      ledMatrix.setRow(r, 0xFF);
    } 

  } else {
    ledMatrix.clear();
  }
}
