#include <iostream>
using namespace std;

void Test(int& n, int& m)
{
    int tmp = n;
    n = m;
    m = tmp;
}

int main() {
    int n, m;
    cin >> n >> m;

    Test(n, m);

    cout << n << " " << m;
    // 여기에 코드를 작성해주세요.
    return 0;
}