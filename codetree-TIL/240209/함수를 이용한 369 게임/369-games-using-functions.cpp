#include <iostream>
using namespace std;

bool Test2(int i)
{
    while(i > 0)
    {
        int tmp = i % 10;
        if(tmp == 3 || tmp == 6 || tmp == 9)
            return true;

        i /= 10;
    }
    return false;
}

bool Test(int i)
{
    return (i % 3 == 0) || Test2(i) ;
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(Test(i)) cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}