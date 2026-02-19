#include <Arduino.h>
#include<servo.h>
Servo myServo;
void setup() {
    Serial.begin(9600);
    myServo.attach(9);
    Serial.println("Servo intiate");
}


void loop() {
    for (int angle = 0; angle <= 3600; angle += 5) {
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(5);
    }
}