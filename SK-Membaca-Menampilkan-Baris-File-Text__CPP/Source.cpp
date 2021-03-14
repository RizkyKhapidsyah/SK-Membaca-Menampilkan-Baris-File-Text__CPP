#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {

	string filename;
	cout << "\n Masukkan nama File : ";
	cin >> filename;

	ifstream readFile(filename.c_str());
	string line;
	unsigned long int lineNo = 1;

	while (getline(readFile, line)){
		cout << "\n" << setw(3) << lineNo << ":" << line;

		if (lineNo % 24 == 0) {
			cout << "\n\t Press ENTER to continue...";
			getchar(); getchar();
		}

		lineNo++;
	}

	_getch();
	return 0;
}