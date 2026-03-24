#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX=10, TX=11

void setup() {
  Serial.begin(9600);
  BT.begin(9600);

  Serial.println("Bluetooth prest! Idatzi ordenagailutik:");
}

void loop() {

  // Ordenagailutik jasotakoa
  if (BT.available()) {
    char c = BT.read();
    Serial.print("BT -> Arduino: ");
    Serial.println(c);
  }

  // Arduino-tik ordenagailura
  if (Serial.available()) {
    char c = Serial.read();
    BT.print(c);
  }
}
