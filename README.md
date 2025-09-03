# ❤️ Arduino Heartbeat Monitoring System (Pulse Sensor)

This project is a **heartbeat monitoring system** built with an **Arduino** and a **Pulse Sensor**.  
The system reads heartbeats in real-time and displays the **BPM (Beats Per Minute)** on the **Serial Monitor**.  
An onboard LED also **blinks with each heartbeat** for visual feedback.  

---

## 🔧 Components Used
- Arduino Uno / Nano  
- Pulse Sensor (Amped / KY-039)  
- Onboard / External LED  
- Jumper wires  
- USB cable  

---

## ⚡ Working Principle
1. The **Pulse Sensor** detects tiny changes in light absorption caused by blood flow.  
2. Arduino processes this analog signal.  
3. BPM (Beats Per Minute) is calculated in real-time.  
4. The **Serial Monitor** displays the current BPM.  
5. An LED blinks in sync with each heartbeat ❤️.  

---

## 🔌 Circuit Connections
| Arduino Pin | Pulse Sensor Pin | Function |
|-------------|------------------|----------|
| `A0`        | Signal           | Analog input from sensor |
| `5V`        | VCC              | Power supply |
| `GND`       | GND              | Ground |
| `13`        | LED              | Blinks on heartbeat |

---

## 🖥️ Output
- **Serial Monitor** displays the live heart rate in BPM.  
- **LED at pin 13** blinks with every detected heartbeat.  

---

## 🚀 Future Improvements
- Add an **OLED / LCD display** for standalone monitoring  
- Store data on **SD card / Cloud** for analysis  
- Send heartbeat data to **mobile app via Bluetooth (HC-05)**  
- Add alerts for abnormal BPM ranges  

---

## 👨‍💻 Developer
**Kamal Singh Sukheeja**  
Robotics & Automation Student | IoT & Embedded Systems Enthusiast  

🔗 [LinkedIn Profile](https://www.linkedin.com/in/your-linkedin)  
📧 Contact: your.email@example.com
