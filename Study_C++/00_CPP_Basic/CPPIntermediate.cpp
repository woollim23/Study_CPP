#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void Func(int arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

void Func1(int &arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

void Func2(string& info)
{
	info += "981년";
}

void Func3(bool *is_on)
{
	cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func4(bool& is_on)
{
	cout << "Call by reference : " << sizeof(is_on) << endl;
}

int main()
{
	/* Call by Value 이해하기 */
	int year = 10;
	Func(year);
	cout << endl << "== Call by Value 이해하기 ==" << endl;
	cout << "함수 종료 후 : " << year << endl;


	/* Call by Reference 이해하기 */
	year = 10;
	Func1(year);
	cout << endl << "== Call by Reference 이해하기 ==" << endl;
	cout << "Func1 함수 종료 후 : " << year << endl;

	string king_info = "고려 성종 즉위년 : ";
	Func2(king_info);
	cout << king_info << endl;


	/* Call by Address 이해하기 */
	bool is_tmp = true;

	cout << endl << "== Call by Address 이해하기 ==" << endl;
	Func3(&is_tmp);
	Func4(is_tmp);


	return 0;
}