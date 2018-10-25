//スコープについて少し
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

int a = 10;   //グローバル変数のa
              //aを使用する関数より前で初期化する

void outFunc1() {
	cout << a << endl;
}

//void outFunc2();          //プロトタイプ宣言とかしてもmain内で宣言できない

void main() {
	int a = 0;              //ローカル変数のa
	outFunc1();             //グローバルのaを使う

/*  void outFunc2() {        //main内で関数の宣言をしない！
							 //関数内関数はCでは禁止！
		cout << a << endl;
	}

	outFunc2();*/

	fin();
}