//�R���X�g���N�^�̌Ăяo���񐔂��L�^����
#include <iostream>
using namespace std;

//�J��Ԃ������̊֐�
inline void fin() {
	//q����͂���ƏI������B
	char ch = 's';
	while (ch != 'q') {
		cin >> ch;
	}
}

class cc {
private:
	int Count() {
		static int i1 = 0;
		i1++;
		return i1;
	}
public:
	cc() {
		cout << Count() << endl;
	}	
	cc(int a, int b) {
		cout << a*b << "." << Count() << endl;
	}

};

int main() {
	cc c1;
	cc c2(2,2);
	cc c3;
	cc c4(4, 2);

	fin();
}