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

enum class MachineStatus : char // enum class 이해하기
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

void Print1(int* arr) // 1차원 배열 함수 인자 사용하기
{
	cout << "== Print1 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[1] = 1000;
}

void Print2(int arr[]) // 1차원 배열 함수 인자 사용하기
{
	cout << "== Print2 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[2] = 2000;
}

void Func5(int arr[2][2]) // 2차원 배열 함수 인자 사용하기
{
	arr[0][0] = 1000;
}

void Func6(int arr[][2], int row) // 2차원 배열 함수 인자 사용하기
{
	arr[row - 2][1] = 2000;
}

void Func7(int* arr, int row, int col)
{
	*((arr + row - 1) + col - 1) = 3000;
}

using ArithmeticFunc = int (*)(int, int); // 함수 포인터 이해하기

int add(int a, int b) { return a + b; } // 함수 포인터 이해하기

template <typename T>
using Matrix = std::vector<std::vector<T>>; // 함수 포인터 이해하기

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


	/* 1차원 배열 사용하기 */
	int data1[3] = { 0, 1, 2 };

	data1[0] += 10;
	data1[1] = 100;
	data1[2] -= 2;
	cout << endl << "== 1차원 배열 사용하기 ==" << endl;
	cout << "== data1 ==" << endl;
	for (int i = 0; i < 3; i++)
		cout << "data1[" << i << "] = " << data1[i] << endl;


	/* 1차원 배열 함수 인자 사용하기 */
	cout << endl << "== 1차원 배열 함수 인자 사용하기 ==" << endl;

	int data[3] = { 0,1,2 };
	Print1(data);
	Print2(data);

	cout << "== 결과 ==" << endl;
	cout << data[0] << ", " << data[1] << ", " << data[2] << endl;


	/* 2차원 배열 함수 인자 사용하기 */
	int data2[2][2]{ {1,2},{3,4} };

	Func5(data2);
	Func6(data2, 2);
	Func7(*data2, 2, 2);

	cout << endl << "== 2차원 배열 함수 인자 사용하기 ==" << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << data2[i][j] << endl;
		}
	}


	/* 배열 일부 변경하기(fill) */
	int data3[10]{ 0, };
	fill(data3, data3 + 3, 10);
	fill(data3 + 4, data3 + 8, 20);

	cout << endl << "== 배열 일부 변경하기(fill) ==" << endl;
	cout << "== data3 결과 ==" << endl;

	for (int i = 0; i < 10; i++)
		cout << data3[i] << ", ";

	vector<int> data4({ 0,1,2,3,4,5,6,7 });
	fill(data4.begin(), data4.begin() + 3, 30);

	cout << endl << endl << "== data4 결과 ==" << endl;

	for (int i = 0, size = data4.size(); i < size; i++)
		cout << data4.at(i) << ", ";

	/* 함수 포인터 이해하기 */

	ArithmeticFunc op = add;
	cout << endl << "== 함수 포인터 이해하기 ==" << endl;
	std::cout << "더하기: " << op(10, 20) << std::endl;

	/* 함수 포인터 이해하기 (일반 버전) */
	int (*fp)(int, int) = add;
	cout << endl << "== 함수 포인터 이해하기 (일반 버전) ==" << endl;
	cout << "fp(3, 4) : " << fp(3, 4) << endl;
	cout << "(*fp)(3, 4) : " << (*fp)(3, 4) << endl;
	return 0;
}