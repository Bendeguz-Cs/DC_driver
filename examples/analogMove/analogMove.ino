#include <DC_driver.h>

DC_driver motor(2, 3, 4);

void setup() {
  motor.begin();

}

void loop() {
  motor.analogMove(true, 127);

}
