#include <iostream>
using namespace std;

// Function prototypes
inline void fin();
template<class T>inline void out(T output);

// �R���\�[�������֐�
inline void fin() {
	out("q����͂���ƏI������B");
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
	out("����Ă�˂��I");
	fin();
}