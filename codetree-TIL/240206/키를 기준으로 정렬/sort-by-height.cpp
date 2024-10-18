#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;

class Test
{
public:
    string name;
    int height;
    int weight;

    Test(string name = "kim", int height = 160, int weight = 50)
        : name(name)
        , height(height)
        , weight(weight)
        {}
};

bool cmp(Test t1, Test t2)
{
    return t1.height < t2.height;
}

Test test[MAX];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> test[i].name >> test[i].height >> test[i].weight;
    }

    sort(test, test + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << test[i].name << " " << test[i].height << " " << test[i].weight << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}