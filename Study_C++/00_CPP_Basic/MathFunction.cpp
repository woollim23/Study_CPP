#include <iostream>
using namespace std;

int main()
{
	// 실수 소수점 버리기 & 올리기
	cout << "== 소수점 버리기 ==" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl; // 양수라면 소수점만 버려지지만
	cout << "floor(-2.3) : " << floor(-2.3) << endl; // 음수라면 원래 실수보다 적은 수를 돌려주기 때문에 한단계 낮은 음수가 된다.
	cout << "floor(40.5) : " << floor(40.5) << endl;
	cout << "floor(-55.7) : " << floor(-55.7) << endl;
	cout << "floor(100.9) : " << floor(100.9) << endl;

	cout << "== 소수점 올리기 ==" << endl;
	cout << "ceil(1.1) : " << ceil(1.1) << endl; // 양수라면 소수점이 있을 때 보다 1증가 하지만
	cout << "ceil(-2.3) : " << ceil(-2.3) << endl; // 음수라면 원래 실 수보다 큰 수를 돌려주기 때문에 뒷 소수점만 삭제된다.
	cout << "ceil(40.5) : " << ceil(40.5) << endl;
	cout << "ceil(-55.7) : " << ceil(-55.7) << endl;
	cout << "ceil(100.9) : " << ceil(100.9) << endl;

	return 0;
}