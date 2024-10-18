#include <iostream>
using namespace std;

int main() {
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a, b, a2, b2;
    cin >> a >> b >> a2 >> b2;

    int sum = 0;

    while(1)
    {
        sum++;
        if(a == a2 && b == b2)
            break;
        b++;
        if(b > month[a])
        {
            b = 1;
            a++;
        }
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}