#ifndef MOTION_H
#define MOTION_H

#include <Arduino.h>

#define PIR_PIN 2  // HC-SR501 OUT pin

void setupMotion();
bool readMotion();

#endif
