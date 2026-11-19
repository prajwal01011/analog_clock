#include "AnalogClock.hpp"
#include <raylib.h>

Color DARK_GREY = {45,45,45,255};
Color LIGHT_GREY = {229,229,229,255};

void AnalogClock::Draw()const
{

    DrawFace();


    } 
void AnalogClock::DrawFace()const {
    DrawCircleV(position,size,DARK_GREY);
    DrawCircleV(position, size -30,LIGHT_GREY);
    DrawCircleV(position, size -40,RAYWHITE);


}
