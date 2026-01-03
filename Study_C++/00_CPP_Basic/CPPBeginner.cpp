#include <iostream>
using namespace std;

int main()
{
	/* 포인터 이해하기(*) */
	int number1 = 10;
	int* pointer1 = &number1;

	double number2 = 23.4;
	double* pointer2 = &number2;

	cout << "number1 : " << number1 << " (size : " << sizeof(number1) << ")" << endl;
	cout << "pointer1 : " << pointer1 << " (size : " << sizeof(pointer1) << ")" << endl;

	cout << "number2 : " << number2 << " (size : " << sizeof(number2) << ")" << endl;
	cout << "pointer2 : " << pointer2 << " (size : " << sizeof(pointer2) << ")" << endl;


	/* 캐스트 연산자 이해하기 */
	int x = 2;
	double y = 4.4;

	int i = static_cast<int>(y / x);
	int j = (int)y / x;
	double k = y / x;

	cout << endl;
	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) " << j << endl;
	cout << "4.4 / 2 = " << k << endl;

	/* 명시적 변환 이해하기 */
	number1 = 65;
	number2 = 23.4;

	int number3 = int(number2);
	double number4 = double(number1 / number2);

	char ch = char(number1);

	cout << endl;
	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;
	cout << "number3 : " << number3 << endl;
	cout << "number4 : " << number4 << endl;

	return 0;
}