//���o�̓X�g���[��
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

//�J��Ԃ������̊֐�
inline void fin() {
	//q����͂���ƏI������B
	char ch = 's';
	while (ch != 'q') {
		cin >> ch;
	}
}

inline void strFunc() {
	int 
		i1 = 7;
	char
		const *ch1 = "Hello World";
	string
		str1 = to_string(i1 * true),
		str2 = "World!",
		str3 = "Cpp"" ""Language";

	cout << "str1 :" << str1 << endl
		<< "str2 :" << str2 << endl
		<< "str3 :" << str3 << endl << endl
		<< "ch[1] :" << ch1[1] << endl
		<< "ch1 :" << ch1 << endl << endl;
}

inline bool fileFunc() {
	ifstream
		file1;
	stringstream
		sstream1;

	file1.open("stream.txt");
	if (file1.fail()) {
		cout << "Error" << endl;
		file1.close();
		return false;
	}
	sstream1 << file1.rdbuf();
	file1.close();
	cout << sstream1.str() << endl << endl;
	return true;
}

int main() {

	strFunc();
	fileFunc();

	fin();
}