#include <iostream>
using namespace std;

void Test(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n, m;
    cin >> n >> m;

    Test(n, m);

    cout << n << " " << m;
    // 여기에 코드를 작성해주세요.
    return 0;
}