#include <BleMouse.h>

BleMouse bleMouse;

// Define button pins
const int buttonPin1 = 20;     // Button connected to GPIO 20 for BLE scroll up
const int outputPin = 9;       // Pin connected to the module or LED
const int buttonPin2 = 8;      // Button connected to the module power toggle
const int buttonPin3 = 10;     // Button connected to GPIO 10 for BLE scroll down

// Variables to store previous button states
bool wasButton1Pressed = false;
bool wasButton3Pressed = false;

void setup() {
  Serial.begin(115200);

  // Set pin modes
  pinMode(outputPin, OUTPUT);         // Set output pin as an output
  pinMode(buttonPin2, INPUT_PULLUP);  // Set button pin as input with pull-up
  digitalWrite(outputPin, LOW);       // Ensure the output is off initially
  pinMode(buttonPin1, INPUT_PULLUP);  // Set buttonPin1 as input with pull-up
  pinMode(buttonPin3, INPUT_PULLUP);  // Set buttonPin3 as input with pull-up

  Serial.println("Starting BLE work!");
  bleMouse.begin();
}

void loop() {
  // Control module power with buttonPin2
  if (digitalRead(buttonPin2) == LOW) {  // Button is active low (pressed)
    digitalWrite(outputPin, HIGH);       // Turn on the output (module)
  } else {
    digitalWrite(outputPin, LOW);        // Turn off the output
  }

  // Check BLE mouse connection and perform scrolling actions
  if (bleMouse.isConnected()) {
    bool isButton1Pressed = digitalRead(buttonPin1) == LOW;  // Button is active low
    bool isButton3Pressed = digitalRead(buttonPin3) == LOW;  // Button is active low

    // Scroll up only when button1 is pressed
    if (isButton1Pressed && !wasButton1Pressed) {  // Detect press event
      Serial.println("Scroll UP");
      bleMouse.move(0, 0, 1);  // Scroll up
    }

    // Scroll down only when button3 is pressed
    if (isButton3Pressed && !wasButton3Pressed) {  // Detect press event
      Serial.println("Scroll DOWN");
      bleMouse.move(0, 0, -1); // Scroll down
    }

    // Update previous button states
    wasButton1Pressed = isButton1Pressed;
    wasButton3Pressed = isButton3Pressed;
  }

  delay(10);  // Small delay to avoid excessive loop processing
}
