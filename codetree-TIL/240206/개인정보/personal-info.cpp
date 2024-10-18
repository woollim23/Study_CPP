#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

class Test
{
public :
    string name;
    int height;
    float weight;

    Test()
        : name(name)
        , height(height)
        , weight(weight)
        {}
};


bool cmp_n(Test t1, Test t2)
{
    return t1.name < t2.name;
}

bool cmp_h(Test t1, Test t2)
{
    return t1.height > t2.height;
}

Test test[MAX + 1];

int main() {
    for(int i = 0; i < 5; i++)
    {
        cin >> test[i].name >> test[i].height >> test[i].weight;
    }

    cout << fixed;
    cout.precision(1);

    sort(test, test + 5, cmp_n);
    cout << "name" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << test[i].name << " " << test[i].height << " " << test[i].weight << endl;
    }

    sort(test, test + 5, cmp_h);
    cout << endl << "height" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << test[i].name << " " << test[i].height << " " << test[i].weight << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}