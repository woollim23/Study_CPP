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

// =======================================================================================================

int main()
{
	// ====== 클래스 정의하기 ======
	cout << endl << "======클래스 정의하기======" << endl;
	KingInfo king_info;
	king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;

	return 0;
}