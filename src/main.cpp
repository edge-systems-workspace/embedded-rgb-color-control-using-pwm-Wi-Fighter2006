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
    digitalWrite(RED_PIN, HIGH);   // Turn ON red
    delay(1000);

    digitalWrite(RED_PIN, LOW);    // Turn OFF red
    delay(1000);

    // -------- ANALOG (PWM) MODE --------

    // Set RED brightness (0–255)
    analogWrite(RED_PIN, 255);   // Full brightness
    analogWrite(GREEN_PIN, 0);   // OFF
    analogWrite(BLUE_PIN, 0);    // OFF
    delay(1000);

    // Yellow color (Red + Green)
    analogWrite(RED_PIN, 255);
    analogWrite(GREEN_PIN, 150);
    analogWrite(BLUE_PIN, 0);
    delay(1000);

    // Purple color (Red + Blue)
    analogWrite(RED_PIN, 150);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255);
    delay(1000);

    // Turn OFF all
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);
    delay(1000);
}