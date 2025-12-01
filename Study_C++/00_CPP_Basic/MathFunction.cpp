#include <iostream>
using namespace std;

int main()
{
	/* 실수 소수점 버리기& 올리기 */
	cout << endl << "== 소수점 버리기 ==" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl; // 양수라면 소수점만 버려지지만
	cout << "floor(-2.3) : " << floor(-2.3) << endl; // 음수라면 원래 실수보다 적은 수를 돌려주기 때문에 한단계 낮은 음수가 된다.
	cout << "floor(40.5) : " << floor(40.5) << endl;
	cout << "floor(-55.7) : " << floor(-55.7) << endl;
	cout << "floor(100.9) : " << floor(100.9) << endl;

	cout << endl << "== 소수점 올리기 ==" << endl;
	cout << "ceil(1.1) : " << ceil(1.1) << endl; // 양수라면 소수점이 있을 때 보다 1증가 하지만
	cout << "ceil(-2.3) : " << ceil(-2.3) << endl; // 음수라면 원래 실 수보다 큰 수를 돌려주기 때문에 뒷 소수점만 삭제된다.
	cout << "ceil(40.5) : " << ceil(40.5) << endl;
	cout << "ceil(-55.7) : " << ceil(-55.7) << endl;
	cout << "ceil(100.9) : " << ceil(100.9) << endl;


	/* 실수 반올림하기(round) */
	cout << endl << "== 소수점 반올림 ==" << endl;
	cout << "round(1.1) : " << round(1.1) << endl; // 양수일때 소수가 5보다 작으면 버려지고,
	cout << "round(-2.3) : " << round(-2.3) << endl; // 음수일때도 소수가 5보다 작으면 버려진다.
	cout << "round(40.5) : " << round(40.5) << endl; // 양수일때 소수가 5 이상이면 1증가 하고
	cout << "round(-55.7) : " << round(-55.7) << endl; // 음수일때도 소수가 5 이상이면 -1이 되어 의도하지 않은 결과가 출력된다.
	cout << "round(100.9) : " << round(100.9) << endl;

	/* 절대값과 제곱수 구하기(abs, fabs, pow) */
	cout << endl << "== 절대값 구하기 ==" << endl; // abs : absolute value(절대값)의 약자
	cout << "-10의 절대값 " << abs(-10) << endl; // 정수의 절대값은 abs 로 구함
	cout << "-5.72의 절대값 " << fabs(-5.72) << endl; // 실수의 절대값은 fabs로 구함, long 자료형은 labs로 구함

	cout << endl << "== 제곱수 구하기 ==" << endl;
	cout << "2의 2승 : " << pow(2, 2) << endl; 
	cout << "3의 4승 : " << pow(3, 4) << endl;
	cout << "4의 6승 : " << pow(4, 6) << endl;
	cout << "8의 3승 : " << pow(8, 3) << endl;

	/* 몫과 나머지 구하기(%) */
	cout << endl << "== 몫과 나머지 구하기 ==" << endl;
	double x = 5.7;
	int div1 = static_cast<int>(x / 5);
	double mod1 = x - 5 * static_cast<int>(x / 5);

	int y = 10;
	int div2 = static_cast<int>(y / 2);
	double mod2 = y % 2;

	cout << "5.7 / 5 = 몫 : " << div1 << "";

	return 0;
}