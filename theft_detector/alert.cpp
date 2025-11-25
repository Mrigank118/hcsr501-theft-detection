#include "alert.h"

void setupAlert() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void triggerAlert() {
  digitalWrite(LED_PIN, HIGH);
  tone(BUZZER_PIN, 1000);  // 1 kHz beep
  delay(500);
  noTone(BUZZER_PIN);
}

void stopAlert() {
  digitalWrite(LED_PIN, LOW);
  noTone(BUZZER_PIN);
}
