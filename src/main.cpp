#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Harsh Chaudhary
 * @date 2026-02-19
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

 const int LDR_PIN = A0;

 int ldrValue = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("LDR Light System Initialized");
}

void loop() {
    ldrValue = analogRead(LDR_PIN);
    Serial.print("Light Level: ");
    Serial.print(ldrValue);

    if (ldrValue > 500) {
        Serial.println(" (Bright)");
    } else {
        Serial.println(" (Dark)");
    }
    delay(1000);
}
