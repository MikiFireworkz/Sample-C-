//�ϐ��̕׋�
#include <iostream>
using namespace std;

void Display(int *i) { //�|�C���^��n���ă���������ϐ��𑀍삷��
	cout << "*i = " << *i << endl;
	cout << " i = " << i << endl;
}

void Displayb(int *b) { //�|�C���^��n���ă���������ϐ��𑀍삷��
	cout << "*b = " << *b << endl;
	cout << " b = " << b << endl;
}
inline void fin() {
	//q����͂���ƏI������B
	char ch = 's';
	while (ch != 'q') {
		static int i = 1;//static�̏������͈�x�̂�
		int b = 0;		//���񏉊��������
		Display(&i);
		Displayb(&b);
		cout << b << "." << i << "���-> q�ŏI��: ";
		cin >> ch;
		i++;
	}
}

//fin()�Ɠ��e�̓����֐�
inline void finv() {
	//q����͂���ƏI������B
	char ch = 's';
	while (ch != 'q') {
		static int i = 1;//static�̏������͈�x�̂�
		int b = 0;		//���񏉊��������
		Display(&i);
		Displayb(&b);
		cout << b << "." << i << "���-> q�ŏI��: ";
		cin >> ch;
		i++;
	}
}



int i = 33;

int main() {

	Display(&i);
	int i = 999;
	Display(&i);
	cout << "Hello World!" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i << "���" << endl;
	}

	fin();
	fin();//�����֐���static�͈ێ������
	finv();//�֐����Ƃ�static�͈ێ������
}