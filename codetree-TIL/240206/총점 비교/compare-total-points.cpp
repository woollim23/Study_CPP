#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;

class Test
{
public:
    string name;
    int a;
    int b;
    int c;

    Test(string name = "kim", int a = 0, int b = 0, int c = 0)
        : name(name)
        , a(a)
        , b(b)
        , c(c)
        {}
};

bool cmp(Test t1, Test t2)
{
    return t1.a + t1.b + t1.c < t2.a + t2.b + t2.c;
}

Test test[MAX];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> test[i].name >> test[i].a >> test[i].b >> test[i].c;
    }

    sort(test, test + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << test[i].name << " " << test[i].a << " " << test[i].b << " " << test[i].c << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}