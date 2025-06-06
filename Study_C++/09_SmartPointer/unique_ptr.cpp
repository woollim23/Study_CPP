#include <iostream>
#include <memory> // unique_ptr ���
using namespace std;

int unique_test1()
{
    cout << "unique_test1 ����\n";
    // unique_ptr ����
    unique_ptr<int> ptr1 = make_unique<int>(10);

    // unique_ptr�� �����ϴ� �� ���
    cout << "ptr1�� ��: " << *ptr1 << endl;

    // unique_ptr�� ���簡 �Ұ���
    //unique_ptr<int> ptr2 = ptr1; // ������ ���� �߻�!

    cout << "unique_test1 ����\n";

    // ������ ����� �޸� �ڵ� ����
    return 0;
}

int unique_test2()
{
    cout << "unique_test2 ����\n";
    // unique_ptr ����
    unique_ptr<int> ptr1 = make_unique<int>(20);

    // ������ �̵� (move ���)
    unique_ptr<int> ptr2 = move(ptr1);

    if (!ptr1) {
        cout << "ptr1�� ���� ��� �ֽ��ϴ�." << endl;
    }
    cout << "ptr2�� ��: " << *ptr2 << endl;

    return 0;
}

int main()
{
    unique_test1();
    unique_test2();
}
