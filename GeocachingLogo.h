
/*

*/

#ifndef GeocachingLogo_H
#define GeocachingLogo_H


#include "Arduino.h"
#include "LiquidCrystal_I2C.h"


class GeocachingLogo {

  public:

    LiquidCrystal_I2C *lcd;
    uint8_t logotype;

    GeocachingLogo(LiquidCrystal_I2C *alcd, uint8_t ltype = 0);
    void draw(uint8_t x, uint8_t y);
    void prepareFont();
  private:

}; //end of class GeocachingLogo



#endif
