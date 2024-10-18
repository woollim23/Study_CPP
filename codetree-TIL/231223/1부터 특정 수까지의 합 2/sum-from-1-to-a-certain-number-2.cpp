#include <iostream>
using namespace std;

int Test(int n)
{
    if(n == 1)
        return 1;
    
    return Test(n-1) + n;
}

int main() {
    int n;
    cin >> n;

    cout << Test(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}