#include <raylib.h>
#include "AnalogClock.hpp"



int main(){
    
    const int Window_Width = 600;
    const int Window_Height = 600;
    Color Light_Blue = {225, 239, 240, 255};    
    
   InitWindow(Window_Width, Window_Height, "AnalogClock"); 
        
    SetTargetFPS(15);

    
    AnalogClock clock{250, {300, 300}};
    //main loop
    while(WindowShouldClose() == false){
    
        //  1) Event Handling
        

        //  2) Updating
       clock.update();     

        
        //  3) Drawing
        BeginDrawing();
        ClearBackground(Light_Blue);
        clock.Draw();

        EndDrawing();

    }

    CloseWindow();


	return 0;
	};
