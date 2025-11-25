#include "motion.h"

void setupMotion() {
  pinMode(PIR_PIN, INPUT);
}

bool readMotion() {
  int motion = digitalRead(PIR_PIN);
  return motion == HIGH; // active-high PIR
}
