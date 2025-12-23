#include <iostream>
using namespace std;

void Minus(const int x, const int y)
{
	cout << "x - y = " << x - y << endl;
}

namespace silla
{
	int year = 935;

	void CentralArea()
	{
		cout << "경상도" << endl;
	}
}

using namespace silla;

int main()
{
	/* 함수 배우기 ( () ) */
	Minus(10, 5);
	cout << endl;

	/* 네임스페이스 배우기 */
	cout << "신라 중심지 : ";
	CentralArea();
	cout << "신라 멸망 연도 : ";
	cout << year << endl;

	return 0;
}