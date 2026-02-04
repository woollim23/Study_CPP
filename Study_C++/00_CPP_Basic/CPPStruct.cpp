#include <iostream>
#include <string>
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

// ====== 구조체 초기화하는 방법2 ======
struct Data3
{
	int number;
};

struct Data4
{
	Data3 data3;
	int number;
}data4;

// ====== 구조체 초기화하는 방법3 ======
struct Info
{
	string country;

	struct Who
	{
		string name;
		string nickname;
	}who;
};

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

	// ====== 구조체 초기화하는 방법2 ======
	cout << endl << "======구조체 초기화하는 방법2======" << endl;
	Data3 data3 = {}; // 내부 변수를 모두 초기화 함
	Data4 data4{ data3, 10 }; // 변수 선언된 순서로 인자 전달하여 초기화

	cout << "Data3 number : " << data3.number << endl;
	cout << "Data4 number : " << data4.number << endl;

	// ====== 구조체 초기화하는 방법3 ======
	cout << endl << "======구조체 초기화하는 방법3======" << endl;
	Info chuck = { "고려", {"장군 척준경", "소드마스터"} };
	Info anjang = { "고구려", {"안장왕 고흥안", "한주 사랑"} };

	cout << chuck.country << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;
	cout << anjang.country << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}