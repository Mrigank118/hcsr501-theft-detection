#ifndef ALERT_H
#define ALERT_H
#include <Arduino.h>
#include "alert.h"

#define LED_PIN 3
#define BUZZER_PIN 4

void setupAlert() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

// Security alarm-style beep
void triggerAlert() {
  unsigned long startTime = millis();
  unsigned long duration = 5000; // alarm lasts 5 seconds

  while (millis() - startTime < duration) {
    // Sweep frequency up
    for (int freq = 800; freq <= 2000; freq += 50) {
      tone(BUZZER_PIN, freq);
      digitalWrite(LED_PIN, HIGH);
      delay(10);
    }
    // Sweep frequency down
    for (int freq = 2000; freq >= 800; freq -= 50) {
      tone(BUZZER_PIN, freq);
      digitalWrite(LED_PIN, LOW);
      delay(10);
    }
  }

  noTone(BUZZER_PIN);
  digitalWrite(LED_PIN, LOW);
}

void stopAlert() {
  digitalWrite(LED_PIN, LOW);
  noTone(BUZZER_PIN);
}

#endif
