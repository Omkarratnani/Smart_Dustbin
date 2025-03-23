# Smart_Dustbin
Ultrasonic Sensor and Servo Motor Control with Arduino
Project Description
This project demonstrates how to use an HC-SR04 Ultrasonic Sensor and a Servo Motor with an Arduino to create a simple object detection and response system. The servo motor reacts based on the distance measured by the ultrasonic sensor:

If an object is detected within a certain range (e.g., 30 cm), the servo rotates to 180°.

If no object is detected within the range, the servo returns to 0°.

This setup can be used in robotics, automation systems, or as part of a larger IoT project.

Features
Measures distance using the HC-SR04 ultrasonic sensor.

Controls a servo motor based on proximity.

Outputs distance readings to the Serial Monitor for debugging.

Components Required
Arduino board (e.g., Arduino Uno)

HC-SR04 Ultrasonic Sensor

Servo Motor (e.g., SG90 or similar)

Jumper wires

Breadboard (optional)

Circuit Diagram
Connections
Ultrasonic Sensor:
VCC → Connect to 5V pin of Arduino.

GND → Connect to GND pin of Arduino.

TRIG → Connect to digital pin 9.

ECHO → Connect to digital pin 8.

Servo Motor:
Power (Red wire) → Connect to 5V pin of Arduino.

Ground (Black wire) → Connect to GND pin of Arduino.

Signal (Yellow/White wire) → Connect to PWM-enabled digital pin 6.
