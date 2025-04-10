# IoT Project Repository - Semester 4

Welcome to my GitHub repository containing a collection of Internet of Things (IoT) projects from my 4th semester lectures. This repository is designed to document and share the IoT projects I have worked on throughout the semester. Each project includes practical experiments using ESP32 microcontrollers, sensors, actuators, and other IoT applications.

---

## List Project

Here is a list of IoT projects available in this repository:

### 1. **Traffic Light Week 1**
   - **Descriptive**: The aim of this experiment is to create a simple traffic light system using an ESP32 microcontroller and three LEDs (Red, Yellow and Green).
   - **Main Feature**:
     - Learn how the ESP32 microcontroller works to control electronic devices like LEDs.
     - Traffic light system simulation with the sequence of lights that comply with standards.
     - Demonstrates the potential use of the Internet of Things (IoT) in smart city applications.
   - **Tools**: ESP32, 1 Red LED, 1 Yellow LED, 1 Green LED, Wire Jumper, VScode.
   - **Folder**: [Traffic Light Week 1](https://github.com/fawwazmw/iot_tivokasi_fawwaz/tree/main/Traffic%20Light%20Minggu%201)

### 2. **Humidity DHT22 Week 2**
   - **Descriptive**: This experiment uses a DHT22 sensor connected to an ESP32 microcontroller to measure temperature and humidity.
   - **Main Feature**:
     - Measures air temperature and humidity in real-time.
     - Demonstrates the potential of IoT applications in environmental monitoring.
   - **Tools**: ESP32, DHT22, Wire Jumper, VSCode.
   - **Folder**: [Humidity DHT22 Week 2](https://github.com/fawwazmw/iot_tivokasi_fawwaz/tree/main/Humidity%20DHT22%20Minggu%202)

### 4. **Relay, Button & LED Week 3**
   - **Descriptive**: The purpose of this experiment is to find out how the relay, button, and LED connected to the ESP32 microcontroller work. The relay functions as an electronic switch to control high-power devices, such as lights or motors, while the button is used as a manual input to turn the relay and LED on or off.
   - **Main Feature**:
     - Learn how relays, buttons and LEDs work and their integration with ESP32.
     - Controlling high power devices using relays via ESP32.
     - Demonstrates the potential of IoT applications in smart home automation.
   - **Tools**: ESP32, Relay Module, Lampu, VSCode.
   - **Folder**: [Relay, Button & LED Week 3](https://github.com/fawwazmw/iot_tivokasi_fawwaz/tree/main/Simulation%20Relay%20Button%20LED%20Minggu%203)

### 5. **Simulation Distance Sensor Ultrasonic Week 4**
   - **Descriptive**: The purpose of this experiment is to learn how an ultrasonic sensor (HC-SR04) works, which is connected to an ESP32 microcontroller and can detect and measure the distance of objects in real-time.
   - **Main Feature**:
     - Learn how the HC-SR04 ultrasonic sensor works and its integration with ESP32.
     - Measure object distance in real-time using ultrasonic sensors.
     - Demonstrates the potential of IoT applications in proximity monitoring, such as automated parking systems or object detection.
   - **Tools**: ESP32, HC-SR04, VSCode.
   - **Folder**: [Distance Sensor Ultrasonic Week 4](https://github.com/fawwazmw/iot_tivokasi_fawwaz/tree/main/Project%20Ultrasonic%20Sensor%20Minggu%204)

### 6. **API Using Laravel 11 Ngrok & API Access WOKWI Week 5**
   - **Descriptive**: The purpose of this experiment is to learn how to create an API using the Laravel 11 framework and integrate it with an IoT simulation on the WOKWI platform. The created API will receive data from an ESP32 microcontroller configured in the WOKWI simulation, and this data will be processed and displayed in real-time by the Laravel API. In addition, Ngrok is used to create a public Laravel API. The purpose of this practice is to gain a basic understanding of IoT API development and the integration of hardware (ESP32) and software (Laravel).
   - **Main Feature**:
     - Learn how the DHT11 temperature and humidity sensor works : Understand its functionality and how it can be integrated with the ESP32 microcontroller.
     - Measure temperature and humidity in real-time : Use the DHT11 sensor to collect environmental data and send it to the Laravel API.
     - Demonstrate the potential of IoT applications in environmental monitoring : Explore use cases such as smart agriculture, weather stations, or home automation systems.
   - **Tools**: ESP32, DHT11 Sensor, VSCode, Laravel 11, Ngrok, WOKWI
   - **Folder**: [API Using Laravel 11 Ngrok & API Access WOKWI](https://github.com/fawwazmw/iot_tivokasi_fawwaz/tree/main/API%20Using%20Laravel%2011%20Ngrok%20%26%20API%20Access%20WOKWI%20Minggu%205)

### 7. **LED Real Hardware Project Week 6**
   - **Descriptive**: This experiment aims to teach you how to use an ESP32 microcontroller in a real hardware arrangement to control several LEDs.  Four LEDs (red, blue, yellow, and green) will be controlled by the ESP32 through programming that allows for several blinking patterns, including random, sequential, alternating, and simultaneous modes.  Gaining practical expertise with IoT hardware development and learning how to combine software logic with tangible parts like LEDs and breadboards are the objectives.
   - **Main Feature**:
      1. Control Multiple LEDs :
         - Learn how to control four LEDs (red, blue, yellow, and green) connected to the ESP32.
      2. Various Blinking Modes :
         - Mode 1 : All LEDs turn on and off simultaneously.
         - Mode 2 : LEDs turn on sequentially (red → blue → yellow → green).
         - Mode 3 : LEDs blink alternately (red ↔ blue, yellow ↔ green).
         - Mode 4 : LEDs blink in a random pattern.
      3. Real-Time Hardware Interaction :
         - Observe the behavior of LEDs in real-time based on the programmed logic.
      4. Hands-On IoT Development :
         - Explore the potential of IoT applications by integrating hardware and software.
   - **Tools**: ESP32, LEDs (Red, Blue, Yellow, Green), Breadboard, Jumper Wires
   - **Folder**: [LED Real Hardware Project](https://github.com/fawwazmw/iot_tivokasi_fawwaz/tree/main/LED%20Real%20Hardware%20Project%20Minggu%206)

---

## How to Use Projects

1. **Clone Repository**:
   ```bash
   git clone https://github.com/fawwazmw/iot_tivokasi_fawwaz.git
   cd iot_tivokasi_fawwaz
   ```

2. **Installation Tools**:
   ```bash
   - Make sure you have the necessary software installed, such as VSCode and PlatformIO.
   - Install additional libraries if needed (see each project's documentation).
   ```

3. **Upload Code to ESP32**:
   ```bash
   - Open the project folder you want to test.
   - Upload the code to the ESP32 using PlatformIO or Arduino IDE.
   ```

4. **Run Project**:
   ```bash
   - Connect the hardware according to the circuit diagram provided.
   - Observe the output results on Serial Monitor or web application (if available).
   ```

## Contribute

If you have ideas or suggestions to improve these projects, please create a pull request or submit an issue . Your contributions are greatly appreciated!

## License

This repository is licensed under the [MIT License](https://opensource.org/license/MIT) . You are free to use, modify, and distribute this code as long as you credit the original source.