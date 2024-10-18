#include <iostream>
#include <algorithm>
#include <cstdlib>
#define MAX 1000
using namespace std;

class Test
{
public : 
    int i;
    int x;
    int y;

    Test(int i = 0, int x = 0, int y = 0)
        : i(i)
        , x(x)
        , y(y)
        {}
};

bool cmp(Test t1, Test t2)
{
    if((abs(0 - t1.x) + abs(0 - t1.y)) == (abs(0 - t2.x) + abs(0 - t2.y)))
    {
        return t1.i < t2.i;
    }
    return (abs(0 - t1.x) + abs(0 - t1.y)) < (abs(0 - t2.x) + abs(0 - t2.y));
}

Test test[MAX];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        test[i].i = i + 1;
        cin >> test[i].x >> test[i].y;
    }

    sort(test, test + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << test[i].i << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}