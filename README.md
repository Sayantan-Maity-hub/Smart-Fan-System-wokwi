# 🌡️ Smart Fan System – Arduino Uno (Wokwi Simulation)

This project simulates an automatic fan control system using a temperature sensor and PWM output.  
Built entirely in the Wokwi simulator.

## 🔧 Features
- DHT22 sensor reads temperature
- Arduino adjusts fan speed via PWM
- Simulated using LED brightness (or servo)
- Logs temperature and fan status to Serial Monitor

## 🧰 Tools Used
- Wokwi Arduino Simulator
- Arduino Uno
- DHT22 Sensor
- PWM output on LED

## 📷 Screenshot

## 🔗 Live Simulation
[Run it on Wokwi](https://wokwi.com/projects/380376011074147329)

## 🔄 Fan Speed Logic
| Temperature | Fan Speed (PWM) |
|-------------|------------------|
| < 25°C      | Low (50)         |
| 25–35°C     | Medium (128)     |
| > 35°C      | High (255)       |

## 📝 Files
- `smart_fan.ino` – Main Arduino code
- `README.md` – Project documentation
