#ifndef ALERT_SYSTEM_H
#define ALERT_SYSTEM_H

#define BUZZER 3
#define LED 4

void setupAlertSystem() {
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void triggerAlert() {
  digitalWrite(LED, HIGH);
  tone(BUZZER, 1000);
}

void stopAlert() {
  digitalWrite(LED, LOW);
  noTone(BUZZER);
}

#endif
