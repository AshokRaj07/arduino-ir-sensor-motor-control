```cpp
// IR sensor and motor control pins
const int irSensor = 3;

const int motor1Control1 = 5;
const int motor1Control2 = 6;

const int motor2Control1 = 9;
const int motor2Control2 = 11;

void setup() {

  // Set IR sensor as input
  pinMode(irSensor, INPUT);

  // Set motor control pins as outputs
  pinMode(motor1Control1, OUTPUT);
  pinMode(motor1Control2, OUTPUT);
  pinMode(motor2Control1, OUTPUT);
  pinMode(motor2Control2, OUTPUT);
}

void loop() {

  // Read the IR sensor
  int sensorValue = digitalRead(irSensor);

  if (sensorValue == 0) {

    // Motor 1 stopped
    analogWrite(motor1Control1, 0);
    analogWrite(motor1Control2, 0);

    // Motor 2 runs
    analogWrite(motor2Control1, 100);
    analogWrite(motor2Control2, 0);

  } else {

    // Motor 1 runs
    analogWrite(motor1Control1, 100);
    analogWrite(motor1Control2, 0);

    // Motor 2 stopped
    analogWrite(motor2Control1, 0);
    analogWrite(motor2Control2, 0);
  }
}
```

