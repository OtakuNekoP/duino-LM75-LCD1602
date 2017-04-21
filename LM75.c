#include "Arduino.h"
#include <Wire.h>
#include "LM75.h" 

LM75::LM75 (unsigned char addr){
  address = addr;
}

float LM75::temp () {
  word regdata;
  Wire.beginTransmission(address);
  Wire.write(LM75_TEMP_REGISTER);
  Wire.endTransmission();
  
  Wire.requestFrom(address, 2);
  regdata = (Wire.read() << 8) | Wire.read();
  return ((float)(regdata >> 5)) * 0.125;
}
