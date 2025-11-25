#include "motion.h"
#include "alert.h"

void setup() {
  Serial.begin(9600);
  setupMotion();
  setupAlert();

  Serial.println("PIR Motion Detector");
  delay(1000);
}

void loop() {
  bool motionDetected = readMotion();
  unsigned long t = millis();

  if (motionDetected) {
    Serial.print(t);
    Serial.println(" ms - Motion Detected!");
    triggerAlert();
  } else {
    Serial.print(t);
    Serial.println(" ms - No Motion Detected!");
    stopAlert();
  }

  delay(500);
}
