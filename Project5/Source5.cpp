//�X�R�[�v�ɂ��ď���
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

int a = 10;   //�O���[�o���ϐ���a
              //a���g�p����֐����O�ŏ���������

void outFunc1() {
	cout << a << endl;
}

//void outFunc2();          //�v���g�^�C�v�錾�Ƃ����Ă�main���Ő錾�ł��Ȃ�

void main() {
	int a = 0;              //���[�J���ϐ���a
	outFunc1();             //�O���[�o����a���g��

/*  void outFunc2() {        //main���Ŋ֐��̐錾�����Ȃ��I
							 //�֐����֐���C�ł͋֎~�I
		cout << a << endl;
	}

	outFunc2();*/

	fin();
}