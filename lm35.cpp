/*
 * This file is part of lm35.h
 * Developed for Gustavo Ortiz
 */
#include "Arduino.h"
#include "lm35.h"
lm35::lm35(byte pin){
    this->_pin  = pin;
    this->_mV   = 5000;
    this->_mAr  = 1023;
    this->_vI   = 0;
}
float lm35::toCelsius(){
    float  r = 0;
    float l = analogRead(this->_pin);
    r = ((l*this->_mV)/this->_mAr)/10;
    return r;
}