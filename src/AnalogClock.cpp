#include "AnalogClock.hpp"
#include <raylib.h>

Color DARK_GREY = {45,45,45,255};
Color LIGHT_GREY = {229,229,229,255};

void AnalogClock::Draw()const
{

    DrawFace();
    DrawHourMarks();
    DrawMinuteHand(30);
    DrawHourHand(3,30);        

 
    
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

void AnalogClock::DrawMinuteHand(int minute) const{
    
    float handWidth =10;
    float handLength = size *0.7;
    
    
    int angle = minute * 6; 
    DrawHand(handWidth,handLength, angle, DARK_GREY);
}

void AnalogClock::DrawHand(float handWidth, float handLength,int angle, Color color) const{
    
    Rectangle handRect = {position.x, position.y, handWidth, handLength};
    DrawRectanglePro(handRect, {handWidth/2, handLength}, angle, color);

        }

void AnalogClock::DrawHourHand(int hour, int minute)const{
    int handWidth = 15;
    int handLength = size * 0.6;

    int angle = 30 * hour + (minute / 60.0) * 30;
    DrawHand(handWidth, handLength, angle, DARKGRAY);    

    
   


    }  
