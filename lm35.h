/*
 * This file is part of lm35.h
 * Developed for Gustavo Ortiz
 */
#ifndef lm35_h
#define lm35_h
#include "Arduino.h"
class lm35
{
private:
    float _pin;
    float _mV;
    float _mAr;
    float _vI;
public:
    lm35(byte pin);
    float toCelsius();
};
#endif