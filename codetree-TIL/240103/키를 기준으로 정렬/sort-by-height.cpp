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
        int tall;
        int weight;

        Test(string name = "name", int tall = 180, int weight = 80)
        {
            this->name = name;
            this->tall = tall;
            this->weight = weight;
        }
};

Test test[max];

bool Cmp(Test a, Test b)
{
    return a.tall < b.tall; 
}

int main() {
    string name;
    int tall;
    int weight;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> name >> tall >> weight;

        test[i] = Test(name, tall, weight);
    }

    sort(test, test + n, Cmp);  

    for(int i = 0; i < n; i++)
    {
        cout << test[i].name << " " << test[i].tall << " " << test[i].weight << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}