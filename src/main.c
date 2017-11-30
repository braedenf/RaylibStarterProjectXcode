#include "raylib.h"

int main() {
    
    //window settings
    int screenWidth = 800;
    int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Raylib - empty-project");
    
    SetTargetFPS(60); //Set target FPS
    
    //[-----------------start game loop--------------------]
    while (!WindowShouldClose()) {
        //[------------Draw--------------]
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Start your game...", screenWidth/2.5, screenHeight/2, 20, LIGHTGRAY);
        EndDrawing();
        //[----------End Draw------------]
    }
    //[---------------De-initialise Window-----------------]
    CloseWindow(); //both window and OpenGL context
    
    return 0;
}
