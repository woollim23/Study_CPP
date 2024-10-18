#include <iostream>
#include <string>
using namespace std;

int main() {
    string day[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, d1, m2, d2;
    int res = 1;

    cin >> m1 >> d1 >> m2 >> d2;

    if(m1 < m2 || (m1 == m2 && (d1 < d2)))
    {
        while(1)
        {
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
    }
    else
    {
        while(1)
        {
            if(m1 == m2 && d1 == d2)
                break;
            d1--;
            if(d1 == 0)
            {
                m1--;
                d1 = month[m1];
            }

            res--;
            if(res < 0)
            {
                res = 6;
            }
        }
    }
    cout << day[res];
    // 여기에 코드를 작성해주세요.
    return 0;
}