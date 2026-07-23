# 🚦 Arduino Traffic Light with Pedestrian Button

## 📖 Project Description

This project is a traffic light simulation built using an Arduino Uno in Tinkercad.

The system normally allows traffic to move by keeping the green LED ON. When a pedestrian presses the push button, the traffic light changes from green to yellow, then to red to stop vehicles. After a short delay for pedestrians to cross, the light changes back to green.

This project demonstrates the fundamentals of Arduino programming, digital input, digital output, and decision making using `if-else` statements.

---

## ✨ Features

- 🚗 Green light for normal traffic
- 🚶 Pedestrian push button
- 🟡 Yellow warning light before changing signals
- 🔴 Red light for pedestrian crossing
- Uses Arduino `INPUT_PULLUP`
- Uses `digitalRead()` and `digitalWrite()`
- Built completely in Tinkercad

---

## 🧰 Components Used

- Arduino Uno
- Breadboard
- 3 LEDs
  - 🔴 Red LED
  - 🟡 Yellow LED
  - 🟢 Green LED
- 3 × 220Ω Resistors
- Push Button
- Jumper Wires

---

## 🔌 Pin Connections

| Component | Arduino Pin |
|-----------|------------|
| Red LED | 13 |
| Yellow LED | 12 |
| Green LED | 11 |
| Push Button | 2 |

---

## ⚙️ Working

### Normal State

- 🟢 Green LED ON
- 🟡 Yellow LED OFF
- 🔴 Red LED OFF

Traffic is allowed to move.

### When the Button is Pressed

1. Green LED turns OFF.
2. Yellow LED turns ON for 2 seconds.
3. Red LED turns ON for 5 seconds.
4. Yellow LED turns ON for 2 seconds.
5. Green LED turns ON again.

The system then waits for the next pedestrian button press.

---

## 💻 Arduino Concepts Used

- Variables
- setup()
- loop()
- pinMode()
- digitalWrite()
- digitalRead()
- INPUT_PULLUP
- if
- else
- delay()

---

## 🚀 Future Improvements

- Add pedestrian LEDs
- Add a buzzer for crossing
- Add countdown timer display
- Replace delays using `millis()`
- Add an LCD display
- Control multiple traffic signals

---

## 👨‍💻 Author

**Moksh**

First Arduino Project for my Robotics Learning Journey.
