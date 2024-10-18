#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

#define max 10

using namespace std;

class Test
{
    public:
        string name;
        int hei;
        int wei;

        Test(string name, int hei, double wei)
        {
            this->name = name;
            this->hei = hei;
            this->wei = wei;
        }
        Test(){}
};

Test test[max];

bool Cmp(Test a, Test b)
{
    if(a.hei == b.hei)
    {
        return a.wei > b.wei;
    }
    return a.hei < b.hei;
}

int main() {
    string name;
    int hei;
    int wei;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> name >> hei >> wei;

        test[i] = Test(name, hei, wei);
    }

    sort(test, test + n, Cmp); 

    for(int i = 0; i < n; i++)
    {
        cout << test[i].name << " " << test[i].hei << " " << test[i].wei << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}