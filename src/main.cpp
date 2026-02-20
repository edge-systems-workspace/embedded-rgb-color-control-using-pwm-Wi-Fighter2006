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

    // STEP 2: Initialize Serial communication
    Serial.begin(9600);

    // STEP 2: Configure RGB pins as OUTPUT
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
}