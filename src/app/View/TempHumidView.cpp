#include "TempHumidView.h"

TempHumidView::TempHumidView(LCD *lcd, Led *led1, Led *led2, Led *led3, Led *led4, Led *led5)
{
    this->lcd = lcd;
    this->led1 = led1;
    this->led2 = led2;
    this->led3 = led3;
    this->led4 = led4;
    this->led5 = led5;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumidData(float temp, float humid)
{
    char buff1[30];
    char buff2[30];
    

    // sprintf(buff1, "w%.1lfC", temp);
    // lcd->WriteStringXY(0, 10, buff1);
    // led1->Off();
    // led2->Off();
    // led3->Off();
    // led4->Off();
    // led5->Off();
   
    sprintf(buff1, "%.1lfC", temp);
    lcd->WriteStringXY(0, 10, buff1);
    sprintf(buff2, "%.1lf%%", humid);
    lcd->WriteStringXY(1, 10, buff2);    
    printf("%s, %s\n", buff1, buff2);
}