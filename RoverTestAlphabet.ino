#include <Alpha.h>
#include <Letters.h>
#include <Wire.h>
#include <Adafruit_MotorShield.h>

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
// Or, create it with a different I2C address (say for stacking)
 Adafruit_MotorShield AFMS2 = Adafruit_MotorShield(0x61); 

// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *pixel1 = AFMS.getMotor(1);
Adafruit_DCMotor *pixel2 = AFMS.getMotor(2);
Adafruit_DCMotor *pixel3 = AFMS.getMotor(3);
Adafruit_DCMotor *pixel4 = AFMS.getMotor(4);
Adafruit_DCMotor *pixel5 = AFMS2.getMotor(1);

int character;
int pattern;
Alpha Alpha;
 
void setup() {
Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){
    character = Serial.read();
    pattern = Alpha.letterPattern(character); 
    Serial.println(pattern);  
  }
}
