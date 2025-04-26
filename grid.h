#pragma once
#include <vector>
#include "raylib.h"
using std::vector;
class Grid {
public:
	Grid();
	void Initialize();
	void Print(); //prints the grid
	void Draw();
	int grid[20][10]; //grid initialized with 10 rows 20 cols
private:
	//vector<Color> GetCellColors();
	int numRows;
	int numCols;
	int cellsize;
	vector<Color> colors;
};
