#include <iostream>
using namespace std;

//繰り返すだけの関数
inline void fin() {
	//qを入力すると終了する。
	char ch = 's';
	while (ch != 'q') {
		cin >> ch;
	}
}

void main() {
	fin();
}