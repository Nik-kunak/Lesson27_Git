#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
const int h = 25, w = 33;
const int wall = 0, path = 1;

int main()
{
	srand(time(0));
	setlocale(0, "");
	int h = 25, w = 33;
	int labr[1][1], flag = 100, r_y, r_x, dir;
	/*string word;
	word = "!";
	cout << "---------------------\n";
	cout << "|   (   )   {   }   |\n";
	cout << "|    )_(     }-{    |\n";
	cout << "|  __           _" << word << "_ |\n";
	cout << "| |  |  _____  {* *}|\n";
	cout << "| | ;| |  *  |  [-] |\n";
	cout << "| |  | |* * *|  [-] |\n";
	cout << "---------------------\n";

	for (int i = 0; i < h; i++) {//fill
		for (int j = 0; j < w; j++) {
			labr[i][j] = 0;
		}
	}

	while (flag == 1) {
		dir = rand()*4-1;

	}*/
	//dir = rand() % 4 + 1;
	r_x = rand() % 34;
	r_y = rand() % 26;
	cout << r_y;
}

bool end(int x, int y, int* labr, int h, int w) {
	int a = 0;
	if (x != 1) {
		if (labr[y][x - 2] == path) {
			a += 1;
		}
	}
	else a += 1;
	if (y != 1) {
		if (labr[y - 2][x] == path) {
			a += 1;
		}
	}
	else {
		a += 1;
	}
	if (x != w - 2) {
		if (labr[y][x + 2] == path) {
			a += 1;
		}
	}
	else a += 1;
	if (y != h - 2) {
		a += 1;
	}
	else {
		a += 1;
	}
	if (a == 4) {
		return 1;
	}
	else {
		return 0;
	}
}

void build(int* labr, int h, int w) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			switch (labr[i][j]) {
			case wall:
				cout << "0 "; break;
			case path:
				cout << "  "; break;
			}
			cout << endl;
		}
		cout << endl;
	}
}

void builder(int* labr, int h, int w) {
	int x, y;
}