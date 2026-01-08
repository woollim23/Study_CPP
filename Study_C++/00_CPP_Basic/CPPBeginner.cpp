#include <iostream>
#include <algorithm>
using namespace std;

class Temp { // 자료형의 크기 이해하기(sizeof) - 클래스
	int no;
	bool is_on;
};

int main()
{
	/* 포인터 이해하기(*) */
	cout << "== 포인터 이해하기(*) ==" << endl;
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

	cout << endl << "== 캐스트 연산자 이해하기 ==" << endl;
	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) " << j << endl;
	cout << "4.4 / 2 = " << k << endl;

	/* 명시적 변환 이해하기 */
	number1 = 65;
	number2 = 23.4;

	int number3 = int(number2);
	double number4 = double(number1 / number2);

	char ch = char(number1);

	cout << endl << "== 명시적 변환 이해하기 ==" << endl;
	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;
	cout << "number3 : " << number3 << endl;
	cout << "number4 : " << number4 << endl;

	/* 자료형의 크기 이해하기(sizeof) */
	cout << endl << "== 자료형의 크기 이해하기(sizeof) ==" << endl;
	cout << "char 크기 : " << sizeof('p') << endl;
	cout << "int 크기 : " << sizeof(10) << endl;
	cout << "double 크기 : " << sizeof(10.0) << endl;
	cout << "클래스 크기 : " << sizeof(Temp) << endl;


	/* 정수와 문자의 최대/최소값 */
	auto result1 = min(1, 5);
	auto result2 = min('a', 'z');
	cout << endl << "== 정수와 문자의 최대/최소값 ==" << endl;
	cout << result1 << ", " << result2 << endl;

	auto result3 = minmax({ 'a','n','z' });
	auto result4 = minmax({ 1, 2, 3 });

	cout << result3.first << ", " << result3.second << endl;
	cout << result4.first << ", " << result4.second << endl;

	return 0;
}