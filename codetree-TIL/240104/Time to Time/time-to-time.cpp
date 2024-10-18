#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = 0;

    while(1)
    {
        if(a == c && b == d)
            break;
        sum++;
        
        if(b == 60)
        {
            b = 0;
            a++;
        }

        b++;
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}