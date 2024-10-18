#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

#define max 1000

using namespace std;

class Test
{
    public:
        string name;
        int hei;
        double wei;

        Test(string name, int hei, double wei)
        {
            this->name = name;
            this->hei = hei;
            this->wei = wei;
        }
        Test(){}
};

Test test[max];

bool Nmp(Test a, Test b)
{
    return a.name < b.name; 
}

bool Cmp(Test a, Test b)
{
    return a.hei > b.hei; 
}

int main() {
    string name;
    int hei;
    double wei;

    for(int i = 0; i < 5; i++)
    {
        cin >> name >> hei >> wei;

        test[i] = Test(name, hei, wei);
    }

    sort(test, test + 5, Nmp);  

    cout << "name" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout.precision(1);
        cout << fixed;
        cout << test[i].name << " " << test[i].hei << " " << test[i].wei << endl;
    }

    sort(test, test + 5, Cmp); 

    cout << endl << "height" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout.precision(1);
        cout << fixed;
        cout << test[i].name << " " << test[i].hei << " " << test[i].wei << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}