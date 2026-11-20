#pragma once
#include <raylib.h>

class AnalogClock{

    public:
        
        AnalogClock(int size, Vector2 position) :size(size), position(position) {};
        void Draw() const;
    private:
        int size;
        Vector2 position; 
        void DrawFace() const;
        void DrawHourMarks() const; 
    
    
        };
