int Sensor_PIN = A0; //Pin location 
int Sensor_VALUE = 0; //Current Value set for the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  Sensor_VALUE = (analogRead(Sensor_PIN)); //read the value of the Sensor_PIN
  Serial.println(Sensor_VALUE); //print out all the value in the Sensor_VALUE
}
