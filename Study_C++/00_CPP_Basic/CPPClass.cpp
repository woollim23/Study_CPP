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
		cout << "Dispose() 함수 실행" << endl;
		delete data;
		delete[] data_arr;
	}

private:
	int* data;
	int* data_arr;
};

// ====== 8. static 클래스 이해하기(static) ======
static class Calculator
{
public:
	int Plus(const int x, const int y) const
	{
		return x + y;
	}
} calc;

// ====== 9. 객체지향 정보은닉 이해하기 ======
class KingInfo4
{
public:
	KingInfo4() {};

public:
	void SetValue(const string value)
	{
		if (value.empty() == false)
			value_ = value;
		else
			cout << "잘못된 인자!" << endl;
	}

	string GetValue() const
	{
		if (value_.empty() == false)
			return value_;
		else
			return "설정을 먼저 해주세요.";
	}

private:
	string value_;
	int number_;
};

// ====== 10. 객체지향 캡슐화 이해하기 ======
class KingInfo5
{
public:
	KingInfo5() {};

public:
	void SetValue(const string name, const string son, int ascend)
	{
		name_ = name;
		son_ = son;
		ascend_ = ascend;
	}

	string GetNameSon() const
	{
		return name_ + "의 아들" + son_;
	}

	string GetNameAscend() const
	{
		return name_ + "즉위 연도 " + to_string(ascend_) + "년";
	}

private:
	string  name_;
	string son_;
	int ascend_;
};

// ====== 11. 객체지향 상속 이해하기 ======
class Info2
{
public:
	Info2() {};

public:
	string name_;
	int year_;
};

class GoodKing : public Info2
{
public:
	GoodKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " 즉위 연도 BC : " << year_ << endl;
	}

private:
	string country_;
};

class BadKing : public Info2
{
public:
	BadKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " 즉위 연도 : " << year_ << endl;
	}

private:
	string country_;
};

// ====== 12. 클래스 상속 Has-A 관계 ======
class Building1
{
public:
	void Name() { cout << "노른자 위 좋은 건물" << endl; }
};

class BuildingOwner : public Building1
{
public:
	void MyBuilding()
	{
		cout << "내 보물 : ";
		Name();
	}
};

// ====== 13. 클래스 상속 Is-A 관계 ======
class Landload
{
public:
	void IamLandload() { cout << "건물주입니다." << endl; }
};

class Tenant
{
public :
	void IamTenant() { cout << "세입자입니다." << endl; }

};

class Nation : public Landload, public Tenant
{
public :
	void Who()
	{
		cout << "저는 ";

		if (is_landload == true)
			IamLandload();
		else
			IamTenant();
	}

public:
	bool is_landload;
};

// ====== 14. 클래스 상속 Not-A 관계 ======
class Landload2
{
public:
	void IamLandload2() { cout << "건물주 입니다."; }
};

class MaleMonkey
{
public:
	void Favorite() { cout << "Favorite : Female Monkey" << endl; }
};

class Nation2 : public Landload2
{
public :
	void Who()
	{
		cout << "안녕하세요. ";
		IamLandload2();
	}
};

// ====== 15. friend 클래스 사용하기(friend) ======
class GoodKing2;
class BadKing2;

class KingInfo6
{
	friend class GoodKing2;

public:
	KingInfo6() {};

private:
	string achieve;
};

class GoodKing2 : KingInfo6
{
public:
	GoodKing2() { achieve = "백제 중훙 군주 근초고왕"; };
	void Display()
	{
		cout << achieve << endl;
	}

};

class BadKing2 : public KingInfo6
{
public:
	BadKing2() { };
	void Display()
	{
		//cout << achieve << endl;
	}

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

	// ====== 8. static 클래스 이해하기(static) ======
	cout << endl << "======static 클래스 이해하기(static)======" << endl;
	cout << "1 + 2 = " << calc.Plus(1, 2) << endl;
	Calculator cal;
	cout << "3 + 4 = " << cal.Plus(3, 4) << endl;

	// ====== 9. 객체지향 정보은닉 이해하기 ======
	cout << endl << "======객체지향 정보은닉 이해하기======" << endl;
	KingInfo4 king_info4_1;
	king_info4_1.SetValue("조선 중종 이역");

	KingInfo4 king_info4_2;
	king_info4_2.SetValue("조선 인종 이호");

	//king_info4_1.value_ = "조선 명종 이환"; // 에러

	cout << king_info4_1.GetValue() << endl;
	cout << king_info4_2.GetValue() << endl;

	// ====== 10. 객체지향 캡슐화 이해하기 ======
	cout << endl << "======객체지향 캡슐화 이해하기======" << endl;
	KingInfo5 king_info5;
	king_info5.SetValue("선조", "광해군", 1567);

	cout << king_info5.GetNameSon() << endl;
	cout << king_info5.GetNameAscend() << endl;

	// ====== 11. 객체지향 상속 이해하기 ======
	cout << endl << "======객체지향 상속 이해하기======" << endl;
	GoodKing king1("고조선");
	king1.name_ = "단군왕검";
	king1.year_ = 2333;

	BadKing king2("고려");
	king2.name_ = "충혜왕";
	king2.year_ = 1330;

	king1.Display();
	king2.Display();

	// ====== 12. 클래스 상속 Has-A 관계 ======
	cout << endl << "======클래스 상속 Has-A 관계======" << endl;
	BuildingOwner envious;
	envious.MyBuilding();

	// ====== 13. 클래스 상속 Is-A 관계 ======
	cout << endl << "======클래스 상속 Is-A 관계======" << endl;
	Nation nation;
	nation.is_landload = true;
	nation.Who();

	// ====== 14. 클래스 상속 Not-A 관계 ======
	cout << endl << "======클래스 상속 Not-A 관계======" << endl;
	Nation2 nation2;
	nation2.Who();

	// ====== 15. friend 클래스 사용하기(friend) ======
	cout << endl << "======friend 클래스 사용하기(friend)======" << endl;
	GoodKing2 good_King;
	good_King.Display();

	BadKing2 bad_King;
	bad_King.Display();

	return 0; 
}