#include <Servo.h>

const int trigPin = 8;
const int echoPin = 9;

long duration;
int distance;
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(10);
}

void loop() {
  // Try slightly overdriving the servo (watch for strain!)
  for(int angle = -5; angle <= 185; angle++) {
    int safeAngle = constrain(angle, 0, 180); // Clamp angle safely
    myServo.write(safeAngle);
    delay(30);
    distance = calculateDistance();

    Serial.print(safeAngle);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }

  for(int angle = 185; angle >= -5; angle--) {
    int safeAngle = constrain(angle, 0, 180); // Clamp angle safely
    myServo.write(safeAngle);
    delay(30);
    distance = calculateDistance();

    Serial.print(safeAngle);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}
