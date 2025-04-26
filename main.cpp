#include "raylib.h"
#include "grid.h"
int main() {

	//colors in raylib : struct: {red,green,blue,alpha}
	Color darkBlue = { 44, 44, 127, 255 };
	InitWindow(300, 600, "Tetris OOP");
	SetTargetFPS(60);
	Grid grid = Grid();
	grid.grid[0][0] = 1;
	grid.grid[3][5] = 4;
	grid.grid[17][8] = 7;
	grid.Print();
	
	//till this point a 
	// game window has been created
	while (WindowShouldClose() == false) //this wsc function checks if esc or close has been pressed and returns true if so
		//at true, destroys window
	{
		BeginDrawing();
		ClearBackground(darkBlue); //clears window with defined color
		grid.Draw();
		EndDrawing();
	}
	CloseWindow(); 
}