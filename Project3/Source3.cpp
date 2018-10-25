//コンストラクタの呼び出し回数を記録する
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