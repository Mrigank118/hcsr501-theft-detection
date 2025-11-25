#ifndef ALERT_H
#define ALERT_H

#include <Arduino.h>

#define LED_PIN 3
#define BUZZER_PIN 4

void setupAlert();
void triggerAlert();
void stopAlert();

#endif
