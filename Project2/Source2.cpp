//convert string to const char*
#include <iostream>
#include <string>
using namespace std;

//繰り返すだけの関数
inline void fin() {
	//qを入力すると終了する。
	char ch = 's';
	while (ch != 'q') {
		cin >> ch;
	}
}


int main() {
	const char *buff1, *buff2, *buff3;
	string s3;

	buff1 = "Hello ";
	buff2 = "World";

	s3 = (string)buff1 + (string)buff2;

	buff3 = s3.c_str();

	cout << buff3 << endl;

	fin();
}
