#include <iostream>
#include <string>
using namespace std;

// ====== 1. 클래스 정의하기 ======

class KingInfo
{
public:
	void SetName(string name)
	{
		name_ = name;
	}

	string GetName() const
	{
		return name_;
	}

private:
	string name_;
};

// ====== 2. 클래스 생성자 정의하기 ======
class KingInfo2
{
public:
	KingInfo2()
	{
		name_ = "조선 예종 이황";
	};

public :
	string GetName() const
	{
		return name_;
	}

private :
	string name_;
};

// ====== 3. 클래스 복수 생성자 정의하기 ======
class KingInfo3
{
public:
	KingInfo3()
	{
		value_ = "조선 성종 이혈";
	};

	KingInfo3(const string value)
	{
		value_ = value;
	};

	KingInfo3(const int value)
	{
		value_ = "연산군 즉위연도 : ";
		value_ += to_string(value);
	};

public:
	string GetValue() const
	{
		return value_;
	}

private:
	string value_;
};

// ====== 4. 클래스 default 생성자(default) ======
class Class1
{
public :
	Class1() = default; // 클래스 내부 변수를 모두 초기화

public :
	int number;
	double prime;
	string word;
};

class Class2
{
public :
	Class2() {};

public :
	int number;
	double prime;
	string word;
};

// ====== 5. 클래스 생성자 초기화 리스트 ======
class TmpClass
{
public :
	TmpClass() : number1(10), number2(20), name("나운 : 문자명왕 이름")
	{

	}

	void Print()
	{
		cout << number1 << ", " << number2 << ", " << number3 << ", " << name << endl;
	}

private :
	int number1 = 1;
	const int number2 = 2;
	static const int number3 = 3;
	string name = "조다 : 장수왕 아들";
};

// ====== 6. 클래스 소멸자 정의하기(~) ======
class TempClass
{
public :
	TempClass()
	{
		cout << "생성자 호출" << endl;
	}

	~TempClass()
	{
		cout << "소멸자 호출" << endl;
	}
};

// ====== 7. 동적 메모리 할당(new, delete) ======
class Info
{
public:
	Info()
	{
		data = new int;
		data_arr = new int[3];
	}
	~Info()
	{
		cout << "소멸자 실행";
		delete data;
		delete[] data_arr;
	}

	void Dispose()
	{
		cout << "Dispose() 함수 실행";
		delete data;
		delete[] data_arr;
	}

private:
	int* data;
	int* data_arr;
};

// =======================================================================================================

int main()
{
	// ====== 1. 클래스 정의하기 ======
	cout << endl << "======클래스 정의하기======" << endl;
	KingInfo king_info;
	king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;

	// ====== 2. 클래스 생성자 정의하기 ======
	cout << endl << "======클래스 생성자 정의하기======" << endl;
	KingInfo2 king_info2;
	cout << king_info.GetName() << endl;

	// ====== 3. 클래스 복수 생성자 정의하기 ======
	cout << endl << "======클래스 복수 생성자 정의하기======" << endl;
	KingInfo3 king_info3_1;
	KingInfo3 king_info3_2("조선 연산군 이융");
	KingInfo3 king_info3_3(1494);

	cout << king_info3_1.GetValue() << endl;
	cout << king_info3_2.GetValue() << endl;
	cout << king_info3_3.GetValue() << endl;

	// ====== 4. 클래스 default 생성자(default) ======
	cout << endl << "======클래스 default 생성자(default)======" << endl;
	Class1* class1 = new Class1();
	cout << "Class1 : " << class1->number << ", " << class1->prime << ", " << class1->word << endl;

	Class2* class2 = new Class2();
	cout << "Class2 : " << class2->number << ", " << class2->prime << ", " << class2->word << endl;

	// ====== 5. 클래스 생성자 초기화 리스트 ======
	cout << endl << "======클래스 생성자 초기화 리스트======" << endl;
	TmpClass tc;
	tc.Print();
	
	// ====== 6. 클래스 소멸자 정의하기(~) ======
	cout << endl << "======클래스 소멸자 정의하기(~)======" << endl;
	TempClass* temp_class = new TempClass();

	delete temp_class;
	temp_class = nullptr;

	// ====== 7. 동적 메모리 할당(new, delete) ======
	cout << endl << "======동적 메모리 할당(new, delete)======" << endl;
	Info* info = new Info();
	info->Dispose();
	//delete info; // 오류 발생 -> 이미 삭제한 데이터이기 때문

	return 0;
}