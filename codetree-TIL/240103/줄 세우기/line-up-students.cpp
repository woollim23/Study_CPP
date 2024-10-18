#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

#define max 1000

using namespace std;

class Test
{
    public:
        int hei, wei, num;

        Test(int hei, int wei, int num)
        {
            this->hei = hei;
            this->wei = wei;
            this->num = num;
        }
        Test(){}
};

Test test[max];

bool Cmp(Test a, Test b)
{
    if(a.hei == b.hei)
    {
        if(a.wei == b.wei)
        {
            return a.num < b.num;
        }
        return a.wei > b.wei;
    }
    return a.hei > b.hei; 
}

int main() {
    int hei, wei;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> hei >> wei;

        test[i] = Test(hei, wei, i+1);
    }

    sort(test, test + n, Cmp);  

    for(int i = 0; i < n; i++)
    {
        cout << test[i].hei << " " << test[i].wei << " " << test[i].num << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}