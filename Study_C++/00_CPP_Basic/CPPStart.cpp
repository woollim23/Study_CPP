#include <iostream>
#include <vector>
using namespace std;

void Minus(const int x, const int y) // 함수 학습 - 함수
{
	cout << "x - y = " << x - y << endl;
}

namespace silla // 네임스페이스 학습 - 네임스페이스
{
	int year = 935;

	void CentralArea()
	{
		cout << "경상도" << endl;
	}
}

namespace baekjae // 네임스페이스 학습 - 네임스페이스
{
	int year = 660;

	void CentralArea()
	{
		cout << "충청도" << endl;
	}
}

int x = 10; // 스코핑룰 학습 - 변수

int Func1() // 스코핑룰 학습 - 함수
{
	int y = x + 10;
	return y;
}

int Func2() // 스코핑룰 학습 - 함수
{
	int x = 100;
	return x;
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
	cout << baekjae::year << endl << endl; // 변수 이름이 같아도, 스코프 설정 연산자 앞에 있는 네임스페이스에 따라 달라진다.

	/* #include 배우기 */
	// 이미 검증된 외부 라이브러리를 찾아 적용하여 시간 단축 & 효율
	// vector 라이브러리 활용
	// C++ 표준 라이브러리에 포함되어 있다면 <>
	// 새로 작성한 소스코드라면 "경로/파일이름"
	vector<int> exam;
	exam.push_back(10);
	exam.push_back(20);
	exam.push_back(30);

	for (int i = 0, size = exam.size(); i < size; i++)
	{
		cout << "벡터 값 : " << exam.at(i) << endl;
	}

	/* 스코핑룰 이해하기 ({}) */
	// 어떤 변수든 변수가 유효한 공간이 존재 -> scope
	// 유효범위를 제한하여 사용하는 것을 스코핑룰이라고도 부름
	cout << endl;
	cout << "y = " << Func1() << endl;
	cout << "x = " << Func2() << endl;
	cout << "x = " << x << endl;

	return 0;
}