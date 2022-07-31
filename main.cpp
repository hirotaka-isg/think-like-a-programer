//main.cpp

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream outputfile("test.txt");
	outputfile << "ファイル出力成功" << endl;
	outputfile.close();
	
	cout << "Success!!" << endl;
	return 0;
	}
