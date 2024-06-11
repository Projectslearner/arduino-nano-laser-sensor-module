/*
    Project name : Laser sensor Module
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-laser-sensor-module
*/

const int laserSensorPin = A0; // Analog pin connected to the laser sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(laserSensorPin); // Read the analog value from the sensor
  float voltage = sensorValue * (5.0 / 1023.0); // Convert the analog value to voltage
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" - Voltage: ");
  Serial.println(voltage);
  
  delay(100); // Add a small delay to avoid spamming the Serial Monitor
}
