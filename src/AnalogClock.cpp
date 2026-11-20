#include "AnalogClock.hpp"
#include <raylib.h>

Color DARK_GREY = {45,45,45,255};
Color LIGHT_GREY = {229,229,229,255};

void AnalogClock::Draw()const
{

    DrawFace();
    DrawHourMarks();

    } 
void AnalogClock::DrawFace()const {
    DrawCircleV(position,size,DARK_GREY);
    DrawCircleV(position, size -30,LIGHT_GREY);
    DrawCircleV(position, size -40,RAYWHITE);


        }

void AnalogClock::DrawHourMarks() const{
    float RectWidth = 10;
    float RectHeight = size;
    
    Rectangle rect = {position.x, position.y, RectWidth, RectHeight};
    for (int i=0; i<12; i++) {
        DrawRectanglePro(rect, {RectWidth/2,RectHeight}, i*30, DARK_GREY); 
    }
    DrawCircleV(position, size-50, RAYWHITE);

        } 
