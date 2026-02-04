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

// ====== 구조체 초기화하는 방법1 ======
struct Data1
{
	Data1(int x) : number(x) {}

	int number;
};

struct Data2
{
	Data2()
	{
		number = 10;
	}

	int number;
}data2;

// =======================================================================================================

int main()
{
	// ====== 구조체를 함수 인자로 사용하기 ======
	cout << endl << "======구조체를 함수 인자로 사용하기======" << endl;
	jungso.name = "정소공주";
	jungso.father = "조선 태종";
	jungso.birthday = "1412년";

	Print(&jungso);

	// ====== 구조체 초기화하는 방법1 ======
	cout << endl << "======구조체 초기화하는 방법1======" << endl;
	Data1 data1(2);
	cout << "Data1 number : " << data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;

	return 0;
}