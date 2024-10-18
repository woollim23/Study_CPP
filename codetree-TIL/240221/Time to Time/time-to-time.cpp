#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;

    while(true)
    {
        if((a == c) && (b == d))
            break;

        b++;
        cnt++;

        if(b == 60)
        {
            a++;
            b = 0;
        }
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}