/*
  Alpha.h - Library for creating letters in five dot marquee text.
  Created by Matthew Hebert, June 22, 2016.
  Released into the public domain.
*/

#ifndef Alpha_H
#define Alpha_H

#include "Arduino.h"

class Alpha{
  public:
    Alpha();
    int letterPattern(char _letter);
    int pattern;
  private:
    char _letter;
};

#endif

