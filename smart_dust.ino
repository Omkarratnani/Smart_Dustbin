#include <Servo.h>

// Define pins for Ultrasonic Sensor
#define TRIG_PIN 9
#define ECHO_PIN 8

// Define pin for Servo Motor
#define SERVO_PIN 6

Servo servo; // Create servo object

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set up ultrasonic sensor pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Attach servo motor to its control pin
  servo.attach(SERVO_PIN);
}

void loop() {
  long duration, distance;

  // Trigger ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure echo duration
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in cm
  distance = (duration / 2) / 29.1;

  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Control servo based on distance
  if (distance < 30) { 
    servo.write(180); // Rotate servo to 180 degrees if object is close
    Serial.println("Object too close! Servo at 180°");
  } else {
    servo.write(0); // Rotate servo back to initial position
    Serial.println("Object at safe distance. Servo at 0°");
  }

  delay(500); // Wait before next measurement
}
