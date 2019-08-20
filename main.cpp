#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	string data;
	ifstream infile;
	infile.open("afile.dat");
	ostringstream ss;
	ss << infile.rdbuf();
	string str = ss.str();
	cout << str << endl;
	cout << "=======================" << endl;
	const char* cstr = str.c_str();
	cout << cstr << endl;
	infile.close();
	return 0;
}