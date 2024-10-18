#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

class Test
{
public :
    int height;
    int weight;
    int i;

    Test()
        : height(height)
        , weight(weight)
        , i(i)
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
        cin >> test[i].height >> test[i].weight;
        test[i].i = i+1;
    }

    sort(test, test + n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << test[i].height << " " << test[i].weight << " " << test[i].i << endl;
    }
    return 0;
}