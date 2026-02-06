#include <iostream>
#include <string>
using namespace std;

// ====== 클래스 정의하기 ======

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

// ====== 클래스 생성자 정의하기 ======
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

// ====== 클래스 복수 생성자 정의하기 ======
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

// =======================================================================================================

int main()
{
	// ====== 클래스 정의하기 ======
	cout << endl << "======클래스 정의하기======" << endl;
	KingInfo king_info;
	king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;

	// ====== 클래스 생성자 정의하기 ======
	cout << endl << "======클래스 생성자 정의하기======" << endl;
	KingInfo2 king_info2;
	cout << king_info.GetName() << endl;

	// ====== 클래스 복수 생성자 정의하기 ======
	cout << endl << "======클래스 복수 생성자 정의하기======" << endl;
	KingInfo3 king_info3_1;
	KingInfo3 king_info3_2("조선 연산군 이융");
	KingInfo3 king_info3_3(1494);

	cout << king_info3_1.GetValue() << endl;
	cout << king_info3_2.GetValue() << endl;
	cout << king_info3_3.GetValue() << endl;
	return 0;
}