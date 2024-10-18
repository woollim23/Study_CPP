#include <iostream>
using namespace std;

int Test(int n)
{
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    return n + Test(n-2);
}

int main() {
    int n;
    cin >> n;

    cout << Test(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}