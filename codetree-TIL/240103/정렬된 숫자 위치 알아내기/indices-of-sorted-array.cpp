#include <iostream>
#include <algorithm>
#include <functional>

#define max 1000

using namespace std;

class Test
{
    public:
        int num, idx, first;

        Test(int num, int idx, int first)
        {
            this-> num = num;
            this-> idx = idx;
            this-> first = first;
        }
        Test(){}
};

Test test[max];

bool cmp(Test a, Test b)
{
    if(a.num == b.num)
    {
        return a.first < b.first;
    }
    return a.num < b.num;
}

bool cmp2(Test a, Test b)
{
    return a.first < b.first;
}

int main() {
    int num, idx, first;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        test[i] = Test(num, i+1, i+1);
    }

    sort(test, test + n, cmp);

    for(int i = 0; i < n; i++)
    {
        test[i].idx = i+1;
    }

    sort(test, test + n, cmp2);

    for(int i = 0; i < n; i++)
    {
        cout << test[i].idx << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}