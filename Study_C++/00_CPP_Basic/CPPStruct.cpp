#include <iostream>
using namespace std;

// ====== 구조체를 함수 인자로 사용하기 ======
struct Princess
{
	string name;
	string father;
	string birthday;
}jungso;

void Print(Princess* who)
{
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.birthday = " << who->birthday << endl;
}

int main()
{
	// ====== 구조체를 함수 인자로 사용하기 ======
	cout << endl << "구조체를 함수 인자로 사용하기" << endl;
	jungso.name = "정소공주";
	jungso.father = "조선 태종";
	jungso.birthday = "1412년";

	Print(&jungso);

	return 0;
}