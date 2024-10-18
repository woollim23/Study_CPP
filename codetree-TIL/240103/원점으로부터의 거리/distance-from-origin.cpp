#include <iostream>
#include <algorithm>
#include <functional>

#define max 1000

using namespace std;

class Test
{
    public:
        int x, y, num;

        Test(int x, int y, int num)
        {
            this->x = x;
            this->y = y;
            this->num = num;
        }
        Test(){}
};

Test test[max];

bool cmp(Test a, Test b)
{
    int x1 = a.x - 0;
    int y1 = a.y - 0;

    if(x1 < 0) x1 *= -1;
    if(y1 < 0) y1 *= -1;

    int x2 = b.x - 0;
    int y2 = b.y - 0;

    if(x2 < 0) x2 *= -1;
    if(y2 < 0) y2 *= -1;

    if(x1+y1 == x2+y2)
    {
        return a.num < b.num;
    }

    return x1+y1 < x2+y2;
}

int main() {
    int x, y, n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        test[i] = Test(x, y, i+1);
    }

    sort(test, test + n, cmp);

    for(int i = 0; i < n; i++)
        cout << test[i].num << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}