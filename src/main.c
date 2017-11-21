#include "raylib.h"

int main() {
    
    //window settings
    int screenWidth = 800;
    int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Raylib - empty-project");
    
    SetTargetFPS(60);
    
    //start game loop
    while (!WindowShouldClose()) {
        //update
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Start your game...", screenWidth/2.5, screenHeight/2, 20, LIGHTGRAY);
        EndDrawing();
    }
    //de-initialise window
    CloseWindow(); //both window and OpenGL context
    
    return 0;
}
