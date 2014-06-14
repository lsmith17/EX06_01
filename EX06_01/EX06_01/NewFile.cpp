#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ofstream fout;
	fout.open("Exercise13_1.txt");

	if (fout.fail()) {
		cout << "Can't open file" << endl;
		return 0;
	}
	for (int i = 0; i < 100; i++)
		fout << i << endl;
		
	fout.close();
}