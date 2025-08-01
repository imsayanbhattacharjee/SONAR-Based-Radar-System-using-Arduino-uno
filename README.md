# 🛰️ SONAR-Based Radar System using Arduino Uno

This project implements a low-cost radar system using an **Arduino Uno**, **Ultrasonic Sensor (HC-SR04)**, and **Servo Motor (SG90)**. The system scans the surroundings, detects objects, and visualizes the data using the **Processing IDE**.

---

## 📌 Features

- 180° scanning using servo motor
- Distance detection using HC-SR04
- Real-time angle & distance output
- Radar-style visualization using Processing
- Serial communication between Arduino and PC

---

## 🧠 System Architecture

![System Architecture](System%20Architecture%20diagrams/Picture1.jpg)


---

## 🧰 Hardware Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires
- Breadboard (optional)
- Power Supply (USB or battery)
- PC with Arduino IDE and Processing IDE

---

## 📂 Folder Structure
```
SONAR-Based-Radar-System-using-Arduino-uno/
├── Codes/
│ ├── Radar_code_new.ino
│ └── Radar_processing.pde
├── System Architecture diagrams/
│ └── Picture1.jpg
├── Working prototype/
│ ├── VID-20250424-WA0003.mp4
│ └── photo_2025-06-08_12-53-30.jpg
├── Circuit diagram.png
└── README.md


---

## ⚙️ How It Works

1. Servo rotates from 0° to 180° and back.
2. At each angle, the ultrasonic sensor sends a TRIG pulse.
3. Echo time is used to calculate distance.
4. Data is sent to the PC via serial.
5. Processing visualizes the angle and distance as a radar sweep.

---

## 🔧 Setup Instructions

1. **Hardware Connections:**
   - `Trig` → Arduino D9  
   - `Echo` → Arduino D10  
   - `Servo` → Arduino D6  
   - Vcc/GND as per component specs

2. **Software Setup:**
   - Upload `radar_system.ino` from `ArduinoCode/` using Arduino IDE.
   - Open `radar_visualizer.pde` from `ProcessingCode/` using Processing IDE.
   - Set the correct COM port and match the baud rate (usually 9600).

---

## 💻 Serial Output Format
- Angle: 45°, Distance: 32 cm
- Angle: 50°, Distance: 28 cm
...

## 🧠 Future Enhancements

- Add Bluetooth/WiFi support for wireless communication
- Implement 3D scanning using additional servo
- Log object data to a file or database
- Obstacle classification using machine learning

---

## 🧑‍💻 Author

**Sayan Bhattacharjee**  
GitHub: [imsayanbhattacharjee](https://github.com/imsayanbhattacharjee)
