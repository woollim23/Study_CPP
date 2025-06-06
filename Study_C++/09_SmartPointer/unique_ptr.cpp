#include <iostream>
#include <memory> // unique_ptr 사용
using namespace std;

int unique_test1()
{
    cout << "unique_test1 실행\n";
    // unique_ptr 생성
    unique_ptr<int> ptr1 = make_unique<int>(10);

    // unique_ptr이 관리하는 값 출력
    cout << "ptr1의 값: " << *ptr1 << endl;

    // unique_ptr은 복사가 불가능
    //unique_ptr<int> ptr2 = ptr1; // 컴파일 에러 발생!

    cout << "unique_test1 종료\n";

    // 범위를 벗어나면 메모리 자동 해제
    return 0;
}

int unique_test2()
{
    cout << "unique_test2 실행\n";
    // unique_ptr 생성
    unique_ptr<int> ptr1 = make_unique<int>(20);

    // 소유권 이동 (move 사용)
    unique_ptr<int> ptr2 = move(ptr1);

    if (!ptr1) {
        cout << "ptr1은 이제 비어 있습니다." << endl;
    }
    cout << "ptr2의 값: " << *ptr2 << endl;

    return 0;
}

int main()
{
    unique_test1();
    unique_test2();
}
