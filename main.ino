//VERSION-1.0.0
#include <ESP32Servo.h>

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // Attach the servos to GPIO pins
  servo1.attach(13);
  servo2.attach(12);
  servo3.attach(14);
  servo4.attach(27);

  // Initialize all servos to the middle position (90 degrees)
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {
  // Move servo1 to 0 degrees
  servo1.write(0);
  delay(1000);  // Wait 1 second
  
  // Move servo2 to 180 degrees
  servo2.write(180);
  delay(1000);  // Wait 1 second

  // Move servo3 to 45 degrees
  servo3.write(45);
  delay(1000);  // Wait 1 second

  // Move servo4 to 135 degrees
  servo4.write(135);
  delay(1000);  // Wait 1 second

  // Reset all servos back to the center (90 degrees)
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(2000);  // Wait 2 seconds
}
