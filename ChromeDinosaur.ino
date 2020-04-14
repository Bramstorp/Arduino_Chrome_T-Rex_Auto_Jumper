#include <Servo.h>
Servo myservo;

int Sensor_PIN = A0;  // Pin location 
int Sensor_VALUE = 0; // Current Value set for the sensor
int Servo_VAL;        // Servo location

void setup() {
  Serial.begin(9600); 
  myservo.attach(2);  // Servo pin location 
  myservo.write(80);  // setup location for the servo
}

void loop() {
  Sensor_VALUE = (analogRead(Sensor_PIN)); // The value of the sensor pin
  
  // check if the there come a cactus
  if (Sensor_VALUE < 130) // insert the value of the white area from the sensor (my was around 126-130)
  { 
    // servo location will move if theres is a cactus 
    Servo_VAL = 100;             
  }
  //if there is no cactus
  else 
  {
    Servo_VAL =  80;
    myservo.write(Servo_VAL);
    delay(50);
  }
  
  //this write the current location value of the Servo_VAL variable 
  myservo.write(Servo_VAL);
}
