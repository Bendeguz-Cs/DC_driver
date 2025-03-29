/*
  Library.h - //short description\\.
  Created by Csermendy Bendeguz, //MONTH DAY, YEAR\\.
  //LICENSE\\
*/

#ifndef DC_driver_h
#define DC_driver_h

#include "Arduino.h"

class DC_driver
{
  public:
    DC_driver();
    void begin();
    void digitalMove();
    void analogMove();
  private:
    byte _in1;
    byte _in2;
    byte _en;
};

#endif

