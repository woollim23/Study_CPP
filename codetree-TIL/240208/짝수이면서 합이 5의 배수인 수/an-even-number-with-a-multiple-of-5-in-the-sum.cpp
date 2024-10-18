#include <iostream>
using namespace std;

int Test(int n)
{
    return ((((n % 10) + (n / 10)) % 5) == 0) && (n % 2 == 0);
}

int main() {
    int n;
    cin >> n;

    if(Test(n))
        cout << "Yes";
    else
        cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}