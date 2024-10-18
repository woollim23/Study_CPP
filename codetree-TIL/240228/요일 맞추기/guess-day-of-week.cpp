#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2, cnt = 1, sum1 = 0, sum2 = 0;
    cin >> m1 >> d1 >> m2 >> d2;

    //                         1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int num_of_days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string day[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

    for (int i = 1; i <= m1; i++)
        sum1 += num_of_days[i];
    sum1 += d1;

    for (int i = 1; i <= m2; i++)
        sum2 += num_of_days[i];
    sum2 += d2;

    if (sum1 > sum2)
    {
        while (true)
        {
            if (m1 == m2 && d1 == d2)
                break;

            cnt--;
            d1--;

            if (d1 <= 0)
            {
                m1--;
                d1 = num_of_days[m1];
            }
            if (cnt < 0)
                cnt = 6;
        }
    }
    else
    {
        while (true)
        {
            if (m1 == m2 && d1 == d2)
                break;

            cnt++;
            d1++;

            if (d1 > num_of_days[m1])
            {
                m1++;
                d1 = 1;
            }
            if (cnt > 6)
                cnt = 0;
        }
    }

    cout << day[cnt];
    return 0;
}