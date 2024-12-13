# Wiring for BLE Mouse with Scroll and Module Control  

## Components  
- **Xiao ESP32C3**  
- **Button 1 (Scroll Up)**  
- **Button 2 (Module Control)**  
- **Button 3 (Scroll Down)**  
- **Laser Module / LED**  
- **3.7V LiPo Battery with Switch**  
- **Pull-up Resistors (optional)**  

## Wiring Connections  

### 1. Power Setup  
- **3.7V LiPo Battery:**  
  - The positive terminal of the battery is connected to a **switch**, allowing you to control the power supply.  
  - The output of the switch is connected to the **VCC** pin of the Xiao ESP32C3.  
  - The negative terminal of the battery is connected to the **GND** pin of the Xiao ESP32C3.  

### 2. Button 1 (Scroll Up)  
- One terminal is connected to **GPIO 20** on the Xiao ESP32C3.  
- The other terminal is connected to **GND**.  
- Internal pull-up resistor is enabled in the code.  

### 3. Button 2 (Module Control)  
- One terminal is connected to **GPIO 8** on the Xiao ESP32C3.  
- The other terminal is connected to **GND**.  
- Toggles power for the external module.  

### 4. Button 3 (Scroll Down)  
- One terminal is connected to **GPIO 10** on the Xiao ESP32C3.  
- The other terminal is connected to **GND**.  
- Internal pull-up resistor is enabled in the code.  

### 5. Laser Module / LED  
- The **positive terminal** is connected to **GPIO 9** via a suitable resistor (if necessary, to limit current).  
- The **negative terminal** is connected to **GND**.  

## Notes  
- Ensure that the 3.7V LiPo battery's voltage and current ratings are compatible with the Xiao ESP32C3 and the connected components.  
- Use appropriate wire gauges for the connections, especially for the battery and laser module.  
- Secure the switch and battery in your case design for stability and ease of use.  