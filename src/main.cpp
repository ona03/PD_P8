#include <Arduino.h>
#include <HardwareSerial.h>

uint8_t nom=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial2.begin(115200);
  Serial2.write(nom);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial2.available() > 0){
    nom = Serial2.read();
    Serial.println(nom);
    Serial2.write(nom); 
  delay(1000);
  }
}