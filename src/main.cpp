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
    for (int angle = 360; angle >= 0; angle -= 5) {
        myServo.write(angle);
        Serial.print("Angle: ");
        Serial.println(angle);
        delay(5);
    }
    myServo.write(0);
    delay(500);
    myServo.write(5000);
    delay(500);
    myServo.write(1000);
    delay(500);
    myServo.write(10000);
    delay(500);

}