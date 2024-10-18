#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

class Test
{
public :
    int i;
    int height;
    int weight;

    Test()
        : i(i)
        , height(height)
        , weight(weight)
        {}
};

bool cmp(Test t1, Test t2)
{
    if(t1.height == t2.height)
    {
        if(t1.weight == t2.weight)
        {
            return t1.i < t2.i;
        }
        return t1.weight > t2.weight;
    }
    return t1.height > t2.height;
}

Test test[MAX + 1];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        test[i].i = i + 1;
        cin >> test[i].height >> test[i].weight;
    }

    sort(test, test + n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << test[i].height << " " << test[i].weight << " " << test[i].i << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}