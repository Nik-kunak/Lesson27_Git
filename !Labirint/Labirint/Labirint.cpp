#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	srand(time(0));
	setlocale(0, "");
	const int h = 25, w = 33;
	int labr[h][w], flag=100, r_y, r_x, dir;
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