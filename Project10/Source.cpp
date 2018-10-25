#include <iostream>
using namespace std;

// Function prototypes
inline void fin();
template<class T>inline void out(T output);

// コンソールを閉じる関数
inline void fin() {
	out("qを入力すると終了する。");
	char ch = 's';
	while (ch != 'q') {
		cin >> ch;
	}
}

template<class T>
inline void out(T output)
{
	std::cout << output << std::endl;
}


void main() {
	out("やってんねぇ！");
	fin();
}