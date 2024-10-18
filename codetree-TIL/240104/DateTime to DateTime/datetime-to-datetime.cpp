#include <iostream>
using namespace std;

int main() {
    int a2, b2, c2;
    int a = 11, b = 11, c = 11;
    cin >> a2 >> b2 >> c2;

    int sum = 0;

    if((a2 < 11) || ((a2 == 11) && (b2 < 11) || ((b2 == 11) && (c2 < 11))))
    {
        cout << -1;
    }
    else
    {
    while(1)
    {
        if(a == a2 && b == b2 && c == c2)
            break;
        sum++;
        c++;
        if(c == 60)
        {
            c = 0;
            b++;

            if(b == 25)
            {
                b = 1;
                a++;
            }
        }

    }
    cout << sum;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}