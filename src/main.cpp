#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000); // Чтобы успеть подключиться к монитору порта
  Serial.println("Привет");
}

void loop() {
  // Ничего не делаем
}
