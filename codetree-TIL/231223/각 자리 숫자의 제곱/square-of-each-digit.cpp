#include <iostream>
using namespace std;

int Test(int n)
{
    if(n < 10)
        return n*n;
    
    return Test(n / 10) + ((n % 10) * (n % 10));
}

int main() {
    int n;
    cin >> n;

    cout << Test(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}