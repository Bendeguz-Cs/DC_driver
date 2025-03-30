/*
  DC_driver.h - Library to use DC motor drivers such as the L298N.
  Created by Csermendy Bendeguz, March 29, 2025.
*/

#ifndef DC_driver_h
#define DC_driver_h

#include "Arduino.h"

class DC_driver
{
  public:
    DC_driver(byte in1, byte in2, byte en);
    void begin();
    void digitalMove(bool direction);
    void analogMove(bool direction, byte speed);
  private:
    byte _in1;
    byte _in2;
    byte _en;
};

#endif

