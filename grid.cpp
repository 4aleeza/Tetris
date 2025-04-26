#include "grid.h"
#include <iostream>
#include "raylib.h"
#include <colors.h>
using namespace std;

Grid::Grid()
{
	numRows = 20;
	numCols = 10;
	cellsize = 30;
	Initialize();
	colors = GetCellColors();
}
void Grid::Initialize()
{
	for (int rows=0; rows < numRows;rows++) {
		for (int cols = 0; cols < numCols;cols++) {
			grid[rows][cols] = 0;
		}
	}
}
void Grid::Print()
{
	for (int rows=0;rows < numRows;rows++) {
		for (int cols=0;cols < numCols;cols++) {
			cout << grid[rows][cols] << " ";
		}
		cout << endl;
	}
}
//vector<Color> Grid::GetCellColors()
//{
//
//	Color darkGrey = { 26, 31, 40, 255 };
//		Color green = { 147, 230, 23, 255 };
//		Color red = { 232, 18, 18, 255 };
//		Color orange = { 245, 117, 17, 255 };
//		Color yellow = { 255, 242, 0, 255 };
//		Color purple = { 123, 47, 209, 255 };
//		Color cyan = { 21, 209, 209, 255 };
//		Color blue = { 13, 64, 216, 255 };
//		
//		return { darkGrey, green, red, orange, yellow, purple, cyan, blue };
//		//order of the colors matters, we will use indexing to draw cells on screen
//}
void Grid::Draw()
{
	for (int row = 0;row < numRows;row++) {
		for (int cols = 0;cols < numCols;cols++) {
			int cellvalue = grid[row][cols];
			DrawRectangle(cols * cellsize+1, row * cellsize+1, cellsize-1, cellsize-1, colors[cellvalue]);
			/*DrawRectangleLines(cols * cellsize, row * cellsize, cellsize, cellsize, WHITE);*/
		}
	}
}