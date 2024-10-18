#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;

class Test
{
public :
    string name;
    int height;
    int weight;

    Test()
        : name(name)
        , height(height)
        , weight(weight)
        {}
};


bool cmp(Test t1, Test t2)
{
    if(t1.height == t2.height)
    {
        return t1.weight > t2.weight;
    }
    return t1.height < t2.height;
}

Test test[MAX + 1];

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
    return 0;
}