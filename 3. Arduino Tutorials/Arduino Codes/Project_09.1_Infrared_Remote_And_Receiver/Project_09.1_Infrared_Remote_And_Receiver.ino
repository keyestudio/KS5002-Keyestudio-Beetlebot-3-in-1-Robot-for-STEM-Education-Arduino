//**********************************************************************************
/*
Project 9.1:Infrared remote and receiver
*/
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

const uint16_t recvPin = 19;  // Infrared receiving pin
IRrecv irrecv(recvPin);  // Create a class object used to receive class
decode_results results;   // Create a decoding results class object

void setup()
{
  Serial.begin(115200); // Initialize the serial port and set the baud rate to 115200
  irrecv.enableIRIn(); // start receiving signals
}

void loop() {
  if (irrecv.decode(&results)) {
    serialPrintUint64(results.value, HEX);
    Serial.println("");
    irrecv.resume(); //Release the IRremote and receive the next value.
  }
  delay(100);
}
//**********************************************************************************
