#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

class Test
{
public :
    int i;
    int data;
    int last;

    Test() : i(i), data(data), last(last) {}
};

bool cmp(Test t1, Test t2)
{
    if(t1.data == t2.data)
        return t1.i < t2.i;
    return t1.data < t2.data;
}

bool cmp_l(Test t1, Test t2)
{
    return t1.i < t2.i;
}

Test test[MAX];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        test[i].i = i + 1;
        test[i].i = i + 1;
        cin >> test[i].data;
    }

    sort(test, test + n, cmp);

    for(int i = 0; i < n; i++)
    {
        test[i].last = i + 1;
    }

    sort(test, test + n, cmp_l);

    for(int i = 0; i < n; i++)
    {
        cout << test[i].last << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}