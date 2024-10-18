#include <iostream>
using namespace std;

void Test(int n)
{
    if(n == 0) return;

    Test(n - 1);

    cout << n << " ";
}

void Test2(int n)
{
    if(n == 0) return;

    cout << n << " ";

    Test2(n - 1);
}

int main() {
    int n;
    cin >> n;

    Test(n);
    cout << endl;
    Test2(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}