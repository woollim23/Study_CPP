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

int main()
{
	/* Call by Value 이해하기 */
	int year = 10;
	Func(year);
	cout << endl << "== Call by Value 이해하기 ==" << endl;
	cout << "함수 종료 후 : " << year << endl;

	return 0;
}