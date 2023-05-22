#include <Arduino.h>
#include <HardwareSerial.h>

uint8_t data=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial2.begin(115200);
  Serial2.write(data);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial2.available() > 0){
    data = Serial2.read();
    Serial.println(data);
    Serial2.write(data); 
  delay(1000);
  }
}
