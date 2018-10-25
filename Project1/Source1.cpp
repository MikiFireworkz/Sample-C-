//変数の勉強
#include <iostream>
using namespace std;

void Display(int *i) { //ポインタを渡してメモリから変数を操作する
	cout << "*i = " << *i << endl;
	cout << " i = " << i << endl;
}

void Displayb(int *b) { //ポインタを渡してメモリから変数を操作する
	cout << "*b = " << *b << endl;
	cout << " b = " << b << endl;
}
inline void fin() {
	//qを入力すると終了する。
	char ch = 's';
	while (ch != 'q') {
		static int i = 1;//staticの初期化は一度のみ
		int b = 0;		//毎回初期化される
		Display(&i);
		Displayb(&b);
		cout << b << "." << i << "回目-> qで終了: ";
		cin >> ch;
		i++;
	}
}

//fin()と内容の同じ関数
inline void finv() {
	//qを入力すると終了する。
	char ch = 's';
	while (ch != 'q') {
		static int i = 1;//staticの初期化は一度のみ
		int b = 0;		//毎回初期化される
		Display(&i);
		Displayb(&b);
		cout << b << "." << i << "回目-> qで終了: ";
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
		cout << i << "回目" << endl;
	}

	fin();
	fin();//同じ関数でstaticは維持される
	finv();//関数ごとにstaticは維持される
}