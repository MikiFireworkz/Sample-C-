//convert string to const char*
#include <iostream>
#include <string>
using namespace std;

//�J��Ԃ������̊֐�
inline void fin() {
	//q����͂���ƏI������B
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
