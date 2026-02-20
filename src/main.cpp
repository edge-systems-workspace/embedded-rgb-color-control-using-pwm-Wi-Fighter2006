#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 */

// Define RGB LED pins
#define RED_PIN   9
#define GREEN_PIN 10
#define BLUE_PIN  11

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
}