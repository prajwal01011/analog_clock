#include <iostream>
#include <raylib.h>

using namespace std;



int main(){
    
    const int Window_Width = 600;
    const int Window_Height = 600;
    
    

    InitWindow(Window_Width, Window_Height, "Analog Clock");
        
    SetTargetFPS(15);


    //main loop
    while(WindowShouldClose() == false){
    
        //  1) Event Handling
        

        //  2) Updating
            

        
        //  3) Drawing
        BeginDrawing();



        EndDrawing();

    }

    CloseWindow();


	return 0;
	};
