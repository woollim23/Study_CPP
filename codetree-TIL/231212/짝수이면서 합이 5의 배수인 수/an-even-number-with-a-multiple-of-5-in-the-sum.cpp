#include <iostream>
using namespace std;

bool test(int n)
{
    bool ch = false;

    if((n % 2 == 0) && (((n/10) + (n%10)) % 5 == 0)) ch = true;

    return ch;
}

int main() {
    int n;
    cin >> n;

    if(test(n)) cout << "Yes";
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}