#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

// STEP 1: Define RGB LED pins
#define RED_PIN   9     // RED connected to pin 9
#define GREEN_PIN 10    // GREEN connected to pin 10
#define BLUE_PIN  11    // BLUE connected to pin 11

void setup() {

    // Initialize Serial communication
    Serial.begin(9600);

    // Configure RGB pins as OUTPUT
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    // STEP 3: Print initialization message
    Serial.println("RGB LED Controller Initialized!");
}
void loop() {

    // -------- DIGITAL MODE --------

    // STEP 4: Turn ON red LED
    digitalWrite(RED_PIN, HIGH);
    delay(1000);  // Keep ON for 1 second

    // STEP 4: Turn OFF red LED
    digitalWrite(RED_PIN, LOW);
    delay(1000);  // Keep OFF for 1 second
}