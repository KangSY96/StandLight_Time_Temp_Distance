#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#include "LCD.h"
#include "Led.h"

#pragma once

class TempHumidView
{
private:
    LCD *lcd;
    Led *led1;
    Led *led2;
    Led *led3;
    Led *led4;
    Led *led5;

public:
    TempHumidView(LCD *lcd, Led *led1, Led *led2, Led *led3, Led *led4, Led *led5);
    ~TempHumidView();
    void setTempHumidData(float temp, float humid);


};

#endif