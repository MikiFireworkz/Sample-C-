/*Template*/

#include<iostream>
#include<vector>


template<class T>			//typename == class
int Sum(T a, T b) {			//function template
	return a + b;
}

template<class U,class T>
T Sum_(U a, T b) {
	return a + b;
}

template <class T>			//class template
class Stack
{
public:
	void Push(T value) {};
	T Pop() {};
	bool IsEmpty() {};

private:
	std::vector<T> stack_;
};

void main() {
	int a = 1;
	int b = 2;
	float f1 = 1.5;
	float f2 = 2.4;

	std::cout << Sum(1, 2) << std::endl;			// 1+2 = 3
	std::cout << Sum(a, b) << std::endl;			// 1+2 = 3
	std::cout << Sum(f1, f2) << std::endl;			// 1.5+2.4 = 3.9 -> 3
	std::cout << Sum<int>(f1, f2) << std::endl;		// 1.5+2.4 -> 1+2 =3

	std::cout << Sum_(f1, f2) << std::endl;			// 1.5+2.4 = 3.9
	std::cout << Sum_(f1, b) << std::endl;			// 1.5+2 = 3.5 -> 3
	std::cout << Sum_(b, f1) << std::endl;			// 2+1.5 = 3.5
	std::cout << Sum_<int, int>(f1, f2) << std::endl;// 1.5+2.4 -> 1+2 =3

	Stack<int> int_stack;

	while(true){}
}