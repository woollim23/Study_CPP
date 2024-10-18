#include <iostream>
#include <string>
using namespace std;

bool Leap(int y)
{
    if(y % 4 == 0)
    {
        if(y % 100 == 0)
        {
            if(y % 400 == 0)
                return true;
        }
        else
            return true;
    }
    
    return false;
}

bool Test(int y, int m, int d)
{
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if(d <= 31 && d >= 1)
            return true;
    }
    else if(m == 2)
    {
        if(Leap(y))
        {
            if(d <= 29 && d >= 1)
                return true;
        }
        else
        {
            if(d <= 28 && d >= 1)
                return true;
        }
    }
    else
    {
        if(d <= 30 && d >= 1)
            return true;
    }

    return false;
}

string Test2(int m)
{
    if(m >= 3 && m <= 5)
        return "Spring";
    else if(m >= 6 && m <= 8)
        return "Summer";
    else if(m >= 9 && m <= 11)
        return "Fall";
    else
        return "Winter";
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if(Test(y, m, d))
        cout << Test2(m);
    else
        cout << -1;
    // 여기에 코드를 작성해주세요.
    return 0;
}