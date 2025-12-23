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

namespace baekjae
{
	int year = 660;

	void CentralArea()
	{
		cout << "충청도" << endl;
	}
}

int main()
{
	/* 함수 배우기 ( () ) */
	Minus(10, 5);
	cout << endl;

	/* 네임스페이스 배우기 */
	cout << "신라 중심지 : ";
	silla::CentralArea();
	cout << "신라 멸망 연도 : ";
	cout << silla::year << endl;
	cout << "백제 중심지 : ";
	baekjae::CentralArea();
	cout << "백제 멸망 연도 : ";
	cout << baekjae::year << endl;

	return 0;
}