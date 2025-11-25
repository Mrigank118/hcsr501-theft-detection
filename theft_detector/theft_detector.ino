#include "motion.h"
#include "alert.h"

void setup() {
  Serial.begin(9600);
  setupMotion();
  setupAlert();

  Serial.println("PIR Motion Detector with LED + Buzzer Started...");
  delay(1000);
}

void loop() {
  bool motionDetected = readMotion();

  if (motionDetected) {
    Serial.println("Motion Detected!");
    triggerAlert();
  } else {
    Serial.println("No Motion Detected!");
    stopAlert();
  }

  delay(500);
}
