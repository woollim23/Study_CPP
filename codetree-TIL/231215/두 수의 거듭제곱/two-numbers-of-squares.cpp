#include <iostream>
using namespace std;

void test(int a, int b)
{
    int res = a;
    for(int i = 1; i < b; i++)
    {
        res *= a;
    }
    cout << res;
}

int main() {
    int a, b;
    cin >> a >> b;

    test(a, b);
    // 여기에 코드를 작성해주세요.
    return 0;
}