#include <iostream>
using namespace std;
//QÆ‚ğ•Ô‚·ŠÖ”‚ÌŒŸØ

int& add0(int& a, int b)
{
	return a += b;
}

int& add1(int& a, int b)
{
	a += b;
	return a;
}

int add2(int& a, int b)
{
	a += b;
	return a;
}

void add3(int& a, int b)
{
	a += b;
}

void main() {
	
	int a = 10;
	int b = 9;

	//--part_1--
	//add2(a, b);
	//cout << a << endl; //return 19

	//--part_2--
	//cout << add2(a, b) << endl; //return 19
	//cout << add2(add2(a, b), b) << endl; ¶‚Ì‚æ‚¤‚É‚Í‚Å‚«‚È‚¢
	//cout << add2(a, add2(a, b)) <<',' << a << endl; //return 38,38
	
	//--part_3--
	//add3(a, b);
	//add3(a, b);
	//cout << a << endl; //return 28

	//--part_4--
	//cout << add1(add1(a, b), b) << endl;   //return 28
	//cout << add2(add1(a, b), b) << endl; //ã‚Æ“¯‚¶‚±‚Æ

	//--part_5--
	cout << add0(a, b) << endl;   //return 19 part4‚Æ‘å‘Ì“¯‚¶‚Ì‚±‚Æ

	system("pause");
}