#include <Arduino.h>
#include "main.h"

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN_BLINK, OUTPUT);
   pinMode(LED_PIN_RED, OUTPUT);
   pinMode(LED_PIN_GREEN, OUTPUT);
   pinMode(LED_PIN_BLUE, OUTPUT); 
}

void loop() {
  blink_led();
  rgb_led(HIGH, LOW, LOW);  // Red
  delay(1000);
  rgb_led(LOW, HIGH, LOW);  // Green
  delay(1000);
  rgb_led(LOW, LOW, HIGH);  // Blue
  delay(1000);
  rgb_led(HIGH, HIGH, LOW);  // Red
  delay(1000);
}

void blink_led() {
  digitalWrite(LED_PIN_BLINK, HIGH);
  delay(500);
  digitalWrite(LED_PIN_BLINK, LOW);
  delay(500);

  Serial.print("Blinking LED on pin ");
  Serial.println(LED_PIN_BLINK);
}
