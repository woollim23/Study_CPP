#include <iostream>
using namespace std;

bool test(int n)
{
    if(n % 4 == 0)
    {
        if(n % 100 == 0)
        {
            if(n % 400 == 0) return true;
            else return false;
        }
        else return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    if(test(n)) cout << "true";
    else cout << "false";
    // 여기에 코드를 작성해주세요.
    return 0;
}