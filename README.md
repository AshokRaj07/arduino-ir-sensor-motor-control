# Arduino IR Sensor Motor Control

A beginner-friendly Arduino project that uses an IR sensor to control motor outputs based on the detected sensor state.

## 📌 About

This project demonstrates how an Arduino can read an IR sensor and use the sensor's digital output to control motors.

The Arduino continuously reads the IR sensor. Depending on whether the sensor returns `0` or `1`, different motor control pins are activated.

## 🚀 Features

* IR sensor input
* Motor control using Arduino
* Digital sensor reading
* Conditional motor control
* Simple embedded-system implementation

## 🛠️ Components Required

* Arduino board
* IR sensor module
* Motor driver
* DC motors
* Jumper wires
* USB cable
* Battery/power supply suitable for the motors

## 🔌 Pin Configuration

| Component         | Arduino Pin |
| ----------------- | ----------: |
| IR Sensor         |           3 |
| Motor 1 Control 1 |           5 |
| Motor 1 Control 2 |           6 |
| Motor 2 Control 1 |           9 |
| Motor 2 Control 2 |          11 |

## 🧠 How It Works

1. The IR sensor is connected to digital pin 3.
2. The Arduino continuously reads the sensor value.
3. If the sensor value is `0`, one motor output is activated.
4. If the sensor value is `1`, the other motor output is activated.
5. The motor control pins are used to control the connected motors.

## ▶️ How to Run

1. Connect the IR sensor and motor driver to the Arduino according to the pin configuration.
2. Connect the motors to the motor driver.
3. Open `ir_motor_control.ino` in the Arduino IDE.
4. Select the correct Arduino board and port.
5. Upload the program.
6. Power the motor driver and Arduino.
7. Test the IR sensor and observe the motor response.

## 📸 Project Demo

Add a photo of your actual hardware setup here:

```markdown
![Project Setup](images/ir.jpg)
```

## 🔮 Future Improvements

* Control both motors for forward and reverse movement
* Add multiple IR sensors
* Implement obstacle avoidance
* Add adjustable motor speed
* Build a complete line-following or obstacle-detection robot
* Add more intelligent movement logic

## 📚 Learning Outcome

This project was created to understand how an Arduino can read sensor input and control motors based on that input.

It helped me learn about digital sensors, motor-control pins, conditional logic, and basic embedded-system programming.
