//  FARM DATA RELAY SYSTEM
//
//  Basic Sensor Example
//
//  Developed by Timm Bogner (bogner1@gmail.com) for Sola Gratia Farm in Urbana, Illinois, USA.
//  An example of how to send data using "fdrs_sensor.h".
//


#include "fdrs_sensor.h"

float data1;
float data2;

void setup() {
  beginFDRS();
}
void loop() {
  data1 = readHum();
  loadFDRS(data1, HUMIDITY_T);
  data2 = readTemp();
  loadFDRS(data2, TEMP_T);
  sendFDRS();
  sleepFDRS(10);  //Sleep time in seconds
}

float readTemp() {
   // return 42.069;
  return 42.5;
}

float readHum() {
  return 21.0345;
}
