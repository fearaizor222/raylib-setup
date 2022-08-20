#include "raylib.h"
#include "raymath.h"
#include <iostream>

int main(){
    InitWindow(800, 600, "Space Invader");
    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(BLACK);
        EndDrawing();
    }
    return 0;
}