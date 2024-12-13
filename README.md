# BLE Mouse with Scroll and Module Control

This project uses an Xiao ESP32C3 to create a Bluetooth Low Energy (BLE) mouse with added functionality. The BLE mouse supports scroll actions (up and down) triggered by physical buttons. Additionally, the project includes a feature to control a laser using a button.

---

## Features

### BLE Mouse Integration
- **Scroll Up or Down**: Triggered by dedicated buttons.
- **Responsive Press Detection**: Prevents repeated actions on button hold.

### Laser Module Control
- **Toggle Power**: A separate button turns the laser module on or off.
- **Press and Release Logic**: The module turns on when the button is pressed and off when released.

### Stable Connectivity
- **Optimized BLE Stability**: Improved loop logic to reduce connection dropouts.
- **Efficient Processing**: Minimizes delays for smooth operation.
  
### Built-in Battery Charging (Xiao ESP32C3)
- **Battery Charging Capability**: The Xiao ESP32C3 includes onboard circuitry to safely charge a 3.7V LiPo battery via its USB-C port.  
- **Seamless Integration**: Allows for simultaneous device usage and charging.  
- **Compact Design**: Eliminates the need for external charging modules.

---

## How It Works

### Scrolling Functionality
- **Button 1**: Scrolls up when pressed.
- **Button 3**: Scrolls down when pressed.

### Module Control
- **Button 2**: Toggles the power of the laser module.

---

### Components
- **ESP32**: Provides BLE functionality.
- **Push Buttons**: For input actions.
- **Laser Module**: To act as a pointer during presentations.
- **Resistors**: Optional for button pull-ups (when not using `INPUT_PULLUP`).

---

## Case
- Acrylic sheets of 1.5mm were used to create a makeshift case for this project.

---

## Code Overview
- **Written in C++**: Utilizes the `BleMouse` library for BLE mouse implementation.
- **Press Detection Logic**: Avoids repeated scrolling or toggling on button hold.
- **Efficient Loop Handling**: Ensures BLE stability and responsiveness.

---

## Possible Improvements
- Add functionality like double-click or drag actions.
- Implement a persistent toggle for the external module.
- Transition to a custom PCB for better hardware organization.

---

## How to Use
1. Flash the provided code onto an Xiao ESP32C3 using the Arduino IDE.
2. Wire the buttons and module as per the schematic in the documentation.
3. Pair the ESP32 with your computer or device to use it as a BLE mouse.

---

## Credits

- This project took inspiration from a video "BLE/WiFi Remote using ESP32C3" from the youtube channel called "techiesms".
- I would also like to thank T-vK (https://github.com/T-vK) for creating this amazing BLE mouse library.

Feel free to fork, use, and adapt this project for your own needs!

