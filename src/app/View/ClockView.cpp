#include "ClockView.h"

ClockView::ClockView(LCD *lcd)
{
    this->lcd = lcd;  // this : 내 객체에서 사용하고 있는 변수
    // timeDate = 0;
}

ClockView::~ClockView()
{

}

void ClockView::updateTime(struct tm *timeData)
{
    char buff[30];
    sprintf(buff, "%02d:%02d:%02d", 
            timeData->tm_hour,
            timeData->tm_min,
            timeData->tm_sec);
    lcd->WriteStringXY(1, 0, buff);
}