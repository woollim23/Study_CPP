#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void Func(int arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

void Func1(int &arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

void Func2(string& info)
{
	info += "981년";
}

void Func3(bool *is_on)
{
	cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func4(bool& is_on)
{
	cout << "Call by reference : " << sizeof(is_on) << endl;
}

enum Status // enum 이해하기
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

enum class MachineStatus : char
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	/* Call by Value 이해하기 */
	int year = 10;
	Func(year);
	cout << endl << "== Call by Value 이해하기 ==" << endl;
	cout << "함수 종료 후 : " << year << endl;


	/* Call by Reference 이해하기 */
	year = 10;
	Func1(year);
	cout << endl << "== Call by Reference 이해하기 ==" << endl;
	cout << "Func1 함수 종료 후 : " << year << endl;

	string king_info = "고려 성종 즉위년 : ";
	Func2(king_info);
	cout << king_info << endl;


	/* Call by Address 이해하기 */
	bool is_tmp = true;

	cout << endl << "== Call by Address 이해하기 ==" << endl;
	Func3(&is_tmp);
	Func4(is_tmp);


	/* const 변수 이해하기 */
	const string kMyJob = "developer";
	string question = "who are you : ";
	string answer = "my job is : ";

	cout << endl << "== const 변수 이해하기 ==" << endl;
	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;


	/* const 포인터 이해하기 */
	int number1 = 10;
	int number2 = 20;

	int const* ptr1;
	ptr1 = &number1;
	//ptr1 = number1; 값 변경 불가
	ptr1 = &number2; // 대상 변경은 가능

	int* const ptr2 = &number1;
	*ptr2 = number2; // 값 변경 가능
	//*ptr2 = &number2; // 대상 변경은 불가


	/* enum 이해하기 */
	Status number = close;

	cout << endl << "== enum 이해하기 ==" << endl;

	if (number == Status::normal)
		cout << "Status : normal" << endl;
	else if(number == abnormal)
		cout << "Status : abnormal" << endl;
	else if(number == 101)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	
	/* enum class 이해하기 */
	MachineStatus machine = MachineStatus::abnormal;

	cout << endl << "== enum class 이해하기 ==" << endl;

	if(machine == MachineStatus::normal)
		cout << "Status : normal" << endl;
	else if (machine == MachineStatus::abnormal)
		cout << "Status : abnormal" << endl;
	else if (machine == MachineStatus::disconnect)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

	return 0;
}