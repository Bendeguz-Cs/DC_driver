/*
  Library.cpp - //short description\\.
  Created by Csermendy Bendeguz, March 29, 2025.
  Released under the MIT license
*/

#include "Arduino.h"
#include "DC_driver.h"

DC_driver::DC_driver(byte in1, byte in2, byte en)
{
  _in1 = in1;
  _in2 = in2;
  _en = en;
}

void DC_driver::begin()
{
  pinMode(_in1, OUTPUT);
  pinMode(_in2, OUTPUT);
  pinMode(_en, OUTPUT);
}

void DC_driver::digitalMove(bool direction)
{
   if(direction) {
     digitalWrite(_in1, HIGH);
     digitalWrite(_in2, LOW);
   } else{
     digitalWrite(_in1, LOW);
     digitalWrite(_in2, HIGH);
   }
  digitalWrite(_en, HIGH);
}

void DC_driver::analogMove(bool direction, byte speed)
{
  if(direction) {
     digitalWrite(_in1, HIGH);
     digitalWrite(_in2, LOW);
   } else{
     digitalWrite(_in1, LOW);
     digitalWrite(_in2, HIGH);
   }
  analogWrite(_en, speed);
}
