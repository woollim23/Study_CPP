#include <iostream>
#include <string>
using namespace std;

int main() {
    string day[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, d1, m2, d2;
    int res = 1, cnt = 0;
    string dd;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> dd;

    while(1)
    {
        if(dd == day[res]) cnt++;
        if(m1 == m2 && d1 == d2)
            break;
        d1++;
        if(d1 > month[m1])
        {
            d1 = 1;
            m1++;
        }

        res++;
        if(res == 7)
        {
            res = 0;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}